// 函数名称: sub_420da0
// 虚拟地址: 0x420da0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_420da0(int32_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: sub_420d10()
    sub_420d10()
    struct _EXCEPTION_REGISTRATION_RECORD** result = data_1511f38
    
    if (result != 7)
        if (arg3 != 7)
            goto label_420ebc
        
        char const* const var_3c
        int32_t var_38
        char const* const var_34_1
        char* ecx_1
        
        if (result != 0)
            var_34_1 = "ClientHitAction"
            var_38 = 0x362
            ecx_1 = "press.pressState == PRESS_NONE"
        label_420f59:
            var_3c = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        label_420f63:
            sub_489550(result, &data_5b2591, ecx_1, var_3c, var_38, var_34_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t eax = sub_420c70(arg2)
        data_1511f3c = eax
        
        if (eax == 0)
            goto label_420ebc
        
        int32_t var_24
        result = sub_4c4810(arg1, &var_24)
        int32_t* ecx_4 = data_6cfe4c
        
        if (ecx_4 == 0)
            var_34_1 = "GetClient"
            var_38 = 0x75
            var_3c = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx_1 = "gClient"
            goto label_420f63
        
        data_1511f98 = *ecx_4
        data_1511f9c = ecx_4[1]
        int32_t ecx_5 = var_24
        data_1511fa0 = ecx_5
        data_1511fa8 = ecx_5
        int32_t var_20
        data_1511fa4 = var_20
        data_1511fac = var_20
        data_1511f44 = *(arg2 + 4)
        data_1511f48 = *(arg2 + 8)
        data_1511f50 = *(arg2 + 0x10)
        data_1511f54 = *(arg2 + 0x14)
        data_1511f58 = *(arg2 + 0x18)
        data_1511f5c = *(arg2 + 0x1c)
        data_1511f60 = *(arg2 + 0x20)
        data_1511f68 = *(arg2 + 0x28)
        data_1511f70 = *(arg2 + 4)
        data_1511f74 = *(arg2 + 8)
        data_1511f7c = *(arg2 + 0x10)
        data_1511f80 = *(arg2 + 0x14)
        data_1511f84 = *(arg2 + 0x18)
        data_1511f88 = *(arg2 + 0x1c)
        data_1511f8c = *(arg2 + 0x20)
        data_1511f94 = *(arg2 + 0x28)
        data_1511f3c = sub_420c70(arg2)
        data_1511f38 = 1
    label_420ebc:
        result = sub_420c70(arg2)
        
        if (result != 0x10)
            uint32_t ecx_9 = sub_480840(arg1, arg3)
            result = *(arg2 + 4)
            
            if (result u> 3)
                var_34_1 = "ClientHitAction"
                var_38 = 0x394
                ecx_1 = "Halt"
                goto label_420f59
            
            switch (result)
                case nullptr
                    struct InputHitResult::UI2HitResult::VTable* const var_1c =
                        &UI2HitResult::`vftable'{for `InputHitResult'}
                    int32_t var_18_1 = 0
                    return sub_4204c0(result, &var_1c, arg1, arg3)
                case 1
                    int32_t var_34_3 = arg3
                    return sub_456f00(result, *(arg2 + 8), ecx_9)
                case 2
                    return sub_4204c0(result, arg2 + 0xc, arg1, arg3)
                case 3
                    if (arg3 == 1 || arg3 == 0)
                        return sub_41e3c0(*(arg2 + 0x20), *(arg2 + 0x24))
    
    return result
}
