// 函数名称: sub_429080
// 虚拟地址: 0x429080
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_429080(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8
    int32_t* var_8
    int32_t eax = sub_4804b0(*arg1, &var_8)
    int32_t edx_1 = 0
    
    if (eax s> 0)
        int32_t* ecx_1 = var_8
        
        do
            if (*ecx_1 == arg1[1])
                void* esi_4 = &var_8[edx_1 * 0x14]
                
                if (edx_1 * 0x50 == neg.d(var_8))
                    break
                
                int32_t result = *(esi_4 + 4)
                
                if (*arg1 == 1 || result != 1)
                    return result
                
                if (data_63c468 == 1)
                    int32_t eax_3 = SteamApps()
                    
                    if ((*(*eax_3 + 0x1c))(*(esi_4 + 8)) != 0)
                        return 0
                
                return 1
            
            edx_1 += 1
            ecx_1 = &ecx_1[0x14]
        while (edx_1 s< eax)
    
    return 3
}
