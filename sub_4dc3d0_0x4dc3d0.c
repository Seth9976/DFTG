// 函数名称: sub_4dc3d0
// 虚拟地址: 0x4dc3d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4dc3d0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* result = *arg2
    int32_t* result = *arg2
    arg2 = result
    
    if (result != 0)
        int32_t i = 0
        
        if (*result s> 0)
            int32_t ebx_1 = 0
            
            do
                void* esi_2 = result[2] + ebx_1
                int32_t edx_1 = *(esi_2 + 0x38)
                
                if (edx_1 != 0)
                    (*(*data_114ec78 + 0x2c))(edx_1)
                    *(esi_2 + 0x38) = 0
                
                int32_t edx_2 = *(esi_2 + 0x3c)
                
                if (edx_2 != 0)
                    (*(*data_114ec78 + 0x38))(edx_2)
                    *(esi_2 + 0x3c) = 0
                
                int32_t edx_3 = *(esi_2 + 0x40)
                
                if (edx_3 != 0)
                    (*(*data_114ec78 + 0x2c))(edx_3)
                    *(esi_2 + 0x40) = 0
                
                int32_t edx_4 = *(esi_2 + 0x44)
                
                if (edx_4 != 0)
                    (*(*data_114ec78 + 0x38))(edx_4)
                    *(esi_2 + 0x44) = 0
                
                result = arg2
                i += 1
                *(esi_2 + 0x48) = 0
                ebx_1 += 0x150
            while (i s< *result)
    
    int32_t** edi_1 = data_114e818
    
    if (edi_1 != 0)
        int32_t* edi_2 = *edi_1
        void* esi_3 = nullptr
        
        while (true)
            void* ecx_5
            
            if (esi_3 != 0)
                ecx_5 = *edi_2
                esi_3 += 0x6c
            else
                esi_3 = *edi_2
                ecx_5 = esi_3
            
            result = edi_2[1] * 0x6c + ecx_5
            
            if (esi_3 u>= result)
                break
            
            while ((*(esi_3 + 0x68) & 0xffff0000) == 0)
                esi_3 += 0x6c
                
                if (esi_3 u>= result)
                    return result
            
            if (*(esi_3 + 4) == arg1)
                sub_4dc250()
    
    return result
}
