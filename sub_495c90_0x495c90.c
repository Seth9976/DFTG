// 函数名称: sub_495c90
// 虚拟地址: 0x495c90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_495c90()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ee78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = data_c4a778
    int32_t eax_3 = 0
    
    if (ecx s> 0)
        do
            *((eax_3 << 2) + &data_114a7c8) = eax_3
            eax_3 += 1
            ecx = data_c4a778
        while (eax_3 s< ecx)
    
    int32_t eax_4 = ecx << 2
    int32_t eax_5 = eax_4 s>> 2
    sub_436380(eax_5, eax_4 + &data_114a7c8, &data_114a7c8, eax_5, sub_495b80)
    char* result = data_114e7f0
    
    if (result s> 0)
        result -= 1
        int32_t i = 0
        data_114e7f0 = result
        
        if (data_c4a778 s> 0)
            do
                int32_t eax_6 = *((i << 2) + &data_114a7c8)
                char* const var_14 = &data_5b2591
                int32_t var_8_1 = 0
                int32_t eax_7 = *(eax_6 * 0x180 + 0xaca778)
                
                if (eax_7 == 0)
                    sub_48a670(&var_14, "Mesh ")
                else if (eax_7 == 1)
                    int32_t var_2c_1 = *(eax_6 * 0x180 + 0xaca8c0)
                    var_8_1.b = 1
                    char* ecx_2 = &data_5b2591
                    char* var_18
                    char* eax_9 = *sub_48a9d0(&var_18, "QuadGroup count:%d ")
                    
                    if (eax_9 != 0)
                        ecx_2 = eax_9
                    
                    sub_48a670(&var_14, ecx_2)
                    var_8_1.b = 2
                    
                    if (data_aca1f4 != 0)
                        char* eax_10 = var_18
                        
                        if (eax_10 != 0 && *eax_10 != 0)
                            char* eax_11 = sub_48a080(&var_18)
                            int32_t temp0_1 = *(eax_11 + 4)
                            *(eax_11 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
                                var_18 = &data_5b2591
                    
                    var_8_1.b = 0
                
                char* const ecx_6 = &data_5b2591
                char* eax_13 = *(*(eax_6 * 0x180 + 0xaca7c0) + 0x20)
                
                if (eax_13 != 0)
                    ecx_6 = eax_13
                
                sub_48a670(&var_14, ecx_6)
                sub_48a670(&var_14, &data_5d59f8)
                void* eax_14 = *(eax_6 * 0x180 + 0xaca7c4)
                
                if (eax_14 != 0)
                    char* eax_15 = *(eax_14 + 0x20)
                    char* const ecx_9 = &data_5b2591
                    
                    if (eax_15 != 0)
                        ecx_9 = eax_15
                    
                    sub_48a670(&var_14, ecx_9)
                    sub_48a670(&var_14, &data_5d59f8)
                
                int32_t var_2c_5 = *(eax_6 * 0x180 + 0xaca8c4)
                var_8_1.b = 3
                char* ecx_12 = &data_5b2591
                char* const var_1c
                char* eax_17 = *sub_48a9d0(&var_1c, "layer:%d ")
                
                if (eax_17 != 0)
                    ecx_12 = eax_17
                
                sub_48a670(&var_14, ecx_12)
                var_8_1.b = 4
                
                if (data_aca1f4 != 0)
                    char* eax_18 = var_1c
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        char* eax_19 = sub_48a080(&var_1c)
                        int32_t temp1_1 = *(eax_19 + 4)
                        *(eax_19 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_19, *(eax_19 + 0xc) + 0x10)
                            var_1c = &data_5b2591
                
                char* const esi_4 = var_14
                char* const eax_20 = &data_5b2591
                
                if (esi_4 != 0)
                    eax_20 = esi_4
                
                char* const var_2c_7 = eax_20
                result = sub_4892e0(&data_5d8f9c)
                int32_t var_8_2 = 5
                
                if (data_aca1f4 != 0 && esi_4 != 0 && *esi_4 != 0)
                    result = sub_48a080(&var_14)
                    int32_t temp2_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp2_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
                
                i += 1
                int32_t var_8_3 = 0xffffffff
            while (i s< data_c4a778)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
