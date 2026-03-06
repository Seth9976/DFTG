// 函数名称: ??1exception@boost@@MAE@XZ
// 虚拟地址: 0x498cc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcall??1exception@boost@@MAE@XZ(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cd10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = `eh vector vbase constructor iterator'(arg1 + 8, 0x34, 2, sub_498c00)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
