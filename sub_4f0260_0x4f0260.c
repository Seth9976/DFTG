// 函数名称: sub_4f0260
// 虚拟地址: 0x4f0260
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_4f0260(int32_t* arg1)
{
    // 第一条实际指令: sub_4f01c0(arg1)
    sub_4f01c0(arg1)
    int32_t* edi = data_114e818
    
    if (edi != 0)
        int32_t* edi_1 = *edi
        void* esi_1 = nullptr
        
        while (true)
            void* ecx_1
            
            if (esi_1 != 0)
                ecx_1 = *edi_1
                esi_1 += 0x6c
            else
                esi_1 = *edi_1
                ecx_1 = esi_1
            
            void* eax_2 = edi_1[1] * 0x6c + ecx_1
            
            if (esi_1 u>= eax_2)
                break
            
            while ((*(esi_1 + 0x68) & 0xffff0000) == 0)
                esi_1 += 0x6c
                
                if (esi_1 u>= eax_2)
                    goto label_4f02b2
            
            sub_4dc250()
    
    label_4f02b2:
    sub_4beb30()
    void* esi_2 = nullptr
    
    while (true)
        void* ecx_3 = data_6c9dac
        
        do
            if (esi_2 != 0)
                esi_2 += 0xf10
            else
                esi_2 = ecx_3
            
            void* result = data_6c9db0 * 0xf10 + ecx_3
            
            if (esi_2 u>= result)
                return result
            
            while ((*(esi_2 + 0xf0c) & 0xffff0000) == 0)
                esi_2 += 0xf10
                
                if (esi_2 u>= result)
                    return result
            
            if (*(esi_2 + 0x3f4) == arg1)
                break
        while (*(esi_2 + 4) != arg1)
        
        int32_t edx_1 = *(esi_2 + 0xe44)
        
        if (edx_1 != 0)
            (*(*data_114ec78 + 0x50))(edx_1)
            *(esi_2 + 0xe44) = 0
        
        *(esi_2 + 0x7e4) = 0
        *(esi_2 + 0x3f8) = 0
        *(esi_2 + 0x3f4) = 0
        *(esi_2 + 8) = 0
        *(esi_2 + 4) = 0
        *(esi_2 + 0xf08) = 0
}
