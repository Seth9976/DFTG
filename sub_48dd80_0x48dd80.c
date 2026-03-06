// 函数名称: sub_48dd80
// 虚拟地址: 0x48dd80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_48dd80()
{
    // 第一条实际指令: int32_t eax_8 = data_63c260
    int32_t eax_8 = data_63c260
    
    if (eax_8 u>= 0x270)
        int32_t ecx
        
        if (eax_8 == 0x271)
            sub_48dd30(ecx, 0x1571)
        int32_t i
        
        for (i = 0; i s< 0xe3; i += 1)
            int32_t edx_4 =
                ((*((i << 2) + &data_63b8a4) ^ (&data_63b8a0)[i]) & 0x7fffffff) ^ (&data_63b8a0)[i]
            (&data_63b8a0)[i] =
                edx_4 u>> 1 ^ *(((edx_4 & 1) << 2) + &data_5f07ec) ^ *((i << 2) + &data_63bed4)
        
        if (i s< 0x26f)
            void* i_1 = &(&data_63b8a0)[i]
            int32_t eax = *i_1
            
            do
                void* i_2 = i_1 + 4
                int32_t ecx_6 = ((*(i_1 + 4) ^ eax) & 0x7fffffff) ^ eax
                *i_1 = *(((ecx_6 & 1) << 2) + &data_5f07ec) ^ *(i_2 - 0x390) ^ ecx_6 u>> 1
                i_1 = i_2
                eax = *i_2
            while (i_1 s< &data_63c25c)
        
        int32_t ecx_10 = (data_63b8a0 ^ data_63c25c) & 0x7fffffff
        data_63c260 = 0
        int32_t ecx_11 = ecx_10 ^ data_63c25c
        eax_8 = 0
        data_63c25c = ecx_11 u>> 1 ^ *(((ecx_11 & 1) << 2) + &data_5f07ec) ^ data_63bed0
    
    int32_t ecx_15 = (&data_63b8a0)[eax_8]
    data_63c260 = eax_8 + 1
    int32_t ecx_16 = ecx_15 ^ ecx_15 u>> 0xb
    int32_t ecx_17 = ecx_16 ^ (ecx_16 & 0xff3a58ad) << 7
    int32_t ecx_18 = ecx_17 ^ (ecx_17 & 0xffffdf8c) << 0xf
    return ecx_18 u>> 0x12 ^ ecx_18
}
