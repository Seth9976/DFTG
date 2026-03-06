// 函数名称: sub_498ae0
// 虚拟地址: 0x498ae0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_498ae0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AAVios_base@2@AAHAA_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_94 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_88
    _memset(&var_88, 0, 0x70)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_98)(void* arg1) = sub_498c00
    void var_80
    `eh vector constructor iterator'(&var_80, 0x34, 2, sub_498be0)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_98_1)(void* arg1) = sub_498c00
    int32_t var_8_1 = 0
    int32_t var_18 = 0
    int32_t var_84 = 0
    var_88 = 2
    int32_t xmm1
    int32_t var_78 = xmm1
    data_126cca8 = 2
    data_126ccac = 0
    (0x126ccb0, &var_80, 0x34, 2, sub_498dc0)
    data_126cd18 = var_18
    int32_t var_8_2 = 1
    `eh vector vbase constructor iterator'(&var_80, 0x34, 2, sub_498c00)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return &data_126cca8
}
