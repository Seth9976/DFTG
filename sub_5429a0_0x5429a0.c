// 函数名称: sub_5429a0
// 虚拟地址: 0x5429a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_5429a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg1[2] != 4)
        int32_t eax = arg1[1]
        
        if (eax != 3)
            if (eax == 0x12)
                sub_4d0ff0(sub_4d0720(arg1), 1, arg1, 0)
                void* eax_3 = sub_4d4280(arg1)
                void* var_8_1 = eax_3
                
                if (*(eax_3 + 0x14) s> 0)
                    int32_t ebx_1 = 0
                    int32_t i = 0
                    
                    do
                        int32_t* esi_1 = *(eax_3 + 0x18)
                        sub_4d0ff0(sub_4d0720(*(esi_1 + ebx_1)), 1, *(esi_1 + ebx_1), 0)
                        eax_3 = var_8_1
                        ebx_1 += 0x30
                        i += 1
                    while (i s< *(eax_3 + 0x14))
                
                goto label_542a2a
            
            char* eax_5 = arg1[8]
            char* const ecx_5 = &data_5b2591
            
            if (eax_5 != 0)
                ecx_5 = eax_5
            
            char* const var_20_1 = ecx_5
            sub_4892e0("AtlasMaker: I don't handle this asset type yet %s")
        else
            sub_4d0ff0(sub_4d0720(arg1), 1, arg1, 0)
        label_542a2a:
            result = arg1[2]
            
            if (result != 4 && result != 0)
                result.b = 1
                return result
    
    result.b = 0
    return result
}
