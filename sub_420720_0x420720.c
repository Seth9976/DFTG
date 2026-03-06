// 函数名称: sub_420720
// 虚拟地址: 0x420720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_420720(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    ebx.b = 0
    int32_t ecx = 1
    
    if (*arg2 != 1 || (arg2[1].b & 6) == 0)
        goto label_4207f2
    
    int32_t eax_3 = (*arg2[0xd])()
    int32_t eax_4 = (*arg2[2])()
    char eax_6
    
    if (eax_3 == eax_4)
        eax_6 = eax_3(&arg2[0xd], &arg2[2])
    
    char const* const var_360
    int32_t var_35c_2
    char const* const var_358_2
    int32_t* eax_7
    char* ecx_4
    int32_t eax_9
    
    if (eax_3 != eax_4 || eax_6 == 0)
        ecx = 1
    label_4207f2:
        eax_9 = *arg2
        
        if (eax_9 == 2 || eax_9 == 3)
            if (eax_9 == 2)
                void var_33c
                
                if (arg2[0x1c] f- arg2[0x1a] <= 0f)
                    if (data_62b224 == 0)
                        sub_462e80(ecx)
                    else
                        sub_4ba390(sub_4c5380(eax_9 - 2, arg1, &var_33c, &data_5d2884, 4), nullptr, 
                            &var_33c, 0x80)
                else if (data_62b224 == 0)
                    sub_462e80(0xffffffff)
                else
                    sub_4ba390(sub_4c5380(eax_9 - 2, arg1, &var_33c, &data_5d2894, 4), nullptr, 
                        &var_33c, 0x40)
                goto label_4208b3
            
            eax_7 = eax_9 - 3
            
            if (eax_9 == 3)
                goto label_4208b3
            
            var_358_2 = "PressEnd"
            var_35c_2 = 0x293
            var_360 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
            ecx_4 = "Halt"
        else
            if (eax_9 == 4 || eax_9 == 5)
                goto label_4208bd
            
            if (eax_9 != 6)
                if ((arg2[1].b & 2) == 0)
                    goto label_4208bd
                
            label_420849:
                int32_t var_358_4 = 0
                sub_420610(eax_9, arg2, ecx)
            label_4208b3:
                ebx.b = 1
            label_4208bd:
                uint32_t eax_13 = zx.d(ebx.b)
                
                if (*arg2 == 7)
                    eax_13 = 1
                
                *arg2 = 0
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_13
            
            eax_7 = arg2[3]
            
            if (eax_7 == 3 || eax_7 == 1)
                goto label_4208b3
            
            var_358_2 = "GameSpecific_DragUpdateAction"
            var_35c_2 = 0x60ed
            var_360 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            ecx_4 = "item.type == HIT_GFX"
    else
        eax_7 = data_6cfe4c
        
        if (eax_7 != 0)
            int32_t ecx_5 = *eax_7
            ecx = ecx_5 - arg2[0x18]
            bool c_1 = ecx_5 u< arg2[0x18]
            int32_t eax_8 = eax_7[1]
            int32_t temp5_1 = arg2[0x19]
            eax_9 = sbb.d(eax_8, temp5_1, c_1)
            bool s_1 = sbb.d(eax_8, temp5_1, c_1) s< 0
            bool o_1 = unimplemented  {sbb eax, dword [esi+0x64]}
            int32_t var_340_2 = eax_9
            
            if (s_1 || ((sbb.d(eax_8, temp5_1, c_1) == 0 || s_1 != o_1) && ecx u<= 0x1f4))
                goto label_420849
            
            int32_t var_358_3 = 1
            sub_420610(eax_9, arg2, ecx)
            *arg2 = 7
            uint32_t eax_10
            eax_10.b = 1
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_10
        
        var_358_2 = "GetClient"
        var_35c_2 = 0x75
        var_360 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_4 = "gClient"
    sub_489550(eax_7, &data_5b2591, ecx_4, var_360, var_35c_2, var_358_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
