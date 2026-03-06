// 函数名称: sub_420950
// 虚拟地址: 0x420950
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_420950(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_8 = eax_1
    
    if (*arg2 != 0)
        void var_33c
        sub_4c5380(eax_1, arg1, &var_33c, &data_5d2840, 9)
        char var_338
        
        if (var_338 == 0)
        label_420c1f:
            uint32_t eax_11 = sub_420720(arg1, arg2)
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_11
        
        char const* const var_390_1
        int32_t var_38c_2
        char const* const var_388_2
        char* ecx_4
        
        if (*arg2 == 1 && (arg2[1].b & 6) != 0)
            int32_t eax_3 = (*arg2[0xd])()
            
            if (eax_3 != (*arg2[2])())
                goto label_420a1c
            
            if (eax_3(&arg2[0xd], &arg2[2]) == 0)
                goto label_420a1c
            
            eax_1 = data_6cfe4c
            
            if (eax_1 != 0)
                int32_t ecx_5 = *eax_1
                int32_t eax_7 = sbb.d(eax_1[1], arg2[0x19], ecx_5 u< arg2[0x18])
                
                if (eax_7 s> 0 || (eax_7 s>= 0 && ecx_5 - arg2[0x18] u> 0x1f4))
                    goto label_420c1f
                
                goto label_420a1c
            
            var_388_2 = "GetClient"
            var_38c_2 = 0x75
            var_390_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx_4 = "gClient"
        label_420c4e:
            sub_489550(eax_1, &data_5b2591, ecx_4, var_390_1, var_38c_2, var_388_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
    label_420a1c:
        float var_344 = arg2[0x1c]
        float xmm0_2 = arg2[0x1d]
        sub_4c4810(arg1, &var_344)
        struct InputHitResult::HitResult::VTable* var_378
        struct InputHitResult::HitResult::VTable** eax_8 = sub_420430(&var_378, arg1)
        float xmm3_1 = var_344
        arg2[0xe] = eax_8[1]
        arg2[0xf] = eax_8[2]
        arg2[0x11] = eax_8[4]
        arg2[0x12] = eax_8[5]
        arg2[0x13] = eax_8[6]
        arg2[0x14] = eax_8[7]
        *(arg2 + 0x54) = *(eax_8 + 0x20)
        eax_1 = eax_8[0xa]
        arg2[0x17] = eax_1
        
        if (*arg2 != 1)
            goto label_420b96
        
        float xmm5_1 = arg2[0x1a]
        float xmm6_1 = arg2[0x1b]
        int32_t xmm4_1 = sub_426e40(xmm3_1 - xmm5_1)
        int32_t xmm0_8 = sub_426e40(xmm0_2 - xmm6_1)
        
        if (not(xmm4_1 f> xmm0_8))
            xmm4_1 = xmm0_8
        
        if (not(20f f>= xmm4_1))
            if (sub_426e40(xmm3_1 - xmm5_1) f<= 20f || (arg2[1].b & 0x10) == 0)
                if (not(sub_426e40(xmm0_2 - xmm6_1) f<= 20f) && (arg2[1].b & 0x20) != 0)
                    *arg2 = 5
                    eax_1 = 5
                    goto label_420b9d
                
                if (not(sub_426e40(xmm3_1 - xmm5_1) f<= 20f) && (arg2[1].b & 0x40) != 0)
                    *arg2 = 2
                    eax_1 = 2
                    goto label_420b9d
                
                if (not(sub_426e40(xmm0_2 - xmm6_1) f<= 20f) && (arg2[1].b & 0x80) != 0)
                    *arg2 = 3
                    eax_1 = 3
                    goto label_420b9d
                
                if ((arg2[1].b & 8) == 0)
                    goto label_420b96
                
                *arg2 = 6
                sub_46df80(eax_1, &arg2[2], arg1, 0, &data_5d27f8)
                xmm3_1 = var_344
            label_420b96:
                eax_1 = *arg2
                
                if (eax_1 == 6 || eax_1 == 5 || eax_1 == 4)
                label_420baf:
                    
                    if (eax_1 != 4)
                        int32_t ecx_17 = arg2[3]
                        
                        if (ecx_17 != 3 && ecx_17 != 1)
                            var_388_2 = "GameSpecific_DragUpdateAction"
                            var_38c_2 = 0x60ed
                            ecx_4 = "item.type == HIT_GFX"
                            var_390_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                            goto label_420c4e
                        
                        arg2[0x1c] = var_344
                        arg2[0x1d] = xmm0_2
                    else
                        float var_34c = xmm3_1 f- arg2[0x1c]
                        int32_t var_348_1 = 0
                        sub_46df80(&var_34c, &arg2[2], arg1, 3, &var_34c)
                        arg2[0x1c] = var_344
                        arg2[0x1d] = xmm0_2
                else
                    arg2[0x1c] = var_344
                    arg2[0x1d] = xmm0_2
            else
                *arg2 = 4
                eax_1 = 4
            label_420b9d:
                
                if (eax_1 == 5 || eax_1 == 4)
                    goto label_420baf
                
                arg2[0x1c] = var_344
                arg2[0x1d] = xmm0_2
    
    eax_1.b = 0
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return eax_1
}
