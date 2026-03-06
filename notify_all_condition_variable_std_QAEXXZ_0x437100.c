// 函数名称: ?notify_all@condition_variable@std@@QAEXXZ
// 虚拟地址: 0x437100
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcall?notify_all@condition_variable@std@@QAEXXZ(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cd10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = `eh vector vbase constructor iterator'(arg1, 0x2f8, 4, sub_437150)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
