// 函数名称: _strncat
// 虚拟地址: 0x589160
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*_strncat(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t i_3 = arg3
    int32_t i_3 = arg3
    
    if (i_3 != 0)
        char* edi_1 = arg1
        void* edi_2
        
        while ((edi_1 & 3) != 0)
            char eax = *edi_1
            edi_1 = &edi_1[1]
            
            if (eax == 0)
            label_5891bd:
                edi_2 = edi_1 - 1
                goto label_5891cf
        
        while (true)
            int32_t eax_1 = *edi_1
            edi_1 = &edi_1[4]
            
            if (((eax_1 ^ 0xffffffff ^ (0x7efefeff + eax_1)) & 0x81010100) != 0)
                int32_t eax_4 = *(edi_1 - 4)
                
                if (eax_4.b == 0)
                    edi_2 = edi_1 - 4
                    break
                
                if (eax_4:1.b == 0)
                    edi_2 = edi_1 - 3
                    break
                
                if ((eax_4 & 0xff0000) == 0)
                    edi_2 = edi_1 - 2
                    break
                
                if ((eax_4 & 0xff000000) == 0)
                    goto label_5891bd
        
    label_5891cf:
        char* esi_1 = arg2
        int32_t edx
        int32_t i_4
        uint32_t i_2
        
        if ((esi_1 & 3) != 0)
            do
                edx.b = *esi_1
                esi_1 = &esi_1[1]
                
                if (edx.b == 0)
                label_58922a:
                    *edi_2 = edx.b
                    return arg1
                
                *edi_2 = edx.b
                edi_2 += 1
                int32_t i_5 = i_3
                i_3 -= 1
                
                if (i_5 == 1)
                    goto label_589220
            while ((esi_1 & 3) != 0)
            
            i_4 = i_3
            i_2 = i_3 u>> 2
            
            if (i_2 != 0)
                goto label_58923c
        else
            i_4 = i_3
            i_2 = i_3 u>> 2
            
            if (i_2 != 0)
            label_58923c:
                uint32_t i
                
                do
                    int32_t eax_7 = *esi_1
                    edx = *esi_1
                    esi_1 = &esi_1[4]
                    
                    if (((eax_7 ^ 0xffffffff ^ (0x7efefeff + eax_7)) & 0x81010100) != 0)
                        if (edx.b == 0)
                            goto label_58922a
                        
                        if (edx:1.b == 0)
                            *edi_2 = edx.w
                            return arg1
                        
                        if ((edx & 0xff0000) == 0)
                            *edi_2 = edx.w
                            *(edi_2 + 2) = 0
                            return arg1
                        
                        if ((edx & 0xff000000) == 0)
                            *edi_2 = edx
                            return arg1
                    
                    *edi_2 = edx
                    edi_2 += 4
                    i = i_2
                    i_2 -= 1
                while (i != 1)
        i_3 = i_4 & 3
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                edx.b = *esi_1
                esi_1 = &esi_1[1]
                *edi_2 = edx.b
                edi_2 += 1
                
                if (edx.b == 0)
                    return arg1
                
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
    label_589220:
        *edi_2 = i_3.b
    
    return arg1
}
