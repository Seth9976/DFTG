// 函数名称: sub_4e4fe0
// 虚拟地址: 0x4e4fe0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4e4fe0(int32_t* arg1)
{
    // 第一条实际指令: void* esi = data_1150b94
    void* esi = data_1150b94
    void* eax
    
    if (esi != 0)
        eax = *arg1
        void* eax_2
        
        if (eax == 1)
            eax = arg1[1]
            void* edx_1 = data_114e818
            
            if (eax == 0x50 && (arg1[2].b & 0xa) != 0 && *(edx_1 + 0x20) != 0)
                void* eax_1 = sub_48df20()
                int32_t edx_2 = *(eax_1 + 0x1c)
                int32_t edx_3 = edx_2 | 0x80
                uint8_t ebx_2 = (edx_2 u>> 7).b & 1
                
                if (ebx_2 != 0)
                    edx_3 = edx_2 & 0xffffff7f
                
                *(eax_1 + 0x1c) = edx_3
                eax_2 = data_1150b94
                bool cond:0_1 = *(eax_2 + 0xbbaa8c) != 0
                *(eax_2 + 0xbbaa94) = ebx_2 ^ 1
                
                if (cond:0_1)
                    eax_2.b = 1
                    return eax_2
                
                *(eax_2 + 0xbbaa8e) = 1
                eax_2.b = 1
                return eax_2
            
            if (*(esi + 0xbbaa94) != 0 && *(edx_1 + 0x20) != 0)
                switch (eax)
                    case 0x1b
                        *(esi + 0xbbaab0) = 0
                        eax.b = 1
                        *(esi + 0xbbaa9c) = 0
                        *(esi + 0xbbaaa8) = 0
                        return eax
                    case 0x24
                        eax_2 = *(esi + 0xbbaa9c)
                        
                        if (eax_2 s< 0)
                            eax_2.b = 1
                            return eax_2
                        
                        *(esi + 0xbbaab4) = *(esi + (eax_2 << 2) + 0xbb6c04)
                        int32_t eax_11
                        eax_11.b = 1
                        *(esi + 0xbbaab0) = 2
                        *(esi + 0xbbaa9c) = 0
                        *(esi + 0xbbaaa8) = 0
                        return eax_11
                    case 0x25
                        int32_t edi = *(esi + 0xbbaab4)
                        int32_t i = 0
                        
                        if (*(esi + 0xbbaa84) s> 0)
                            void* ecx_3 = esi + 0xb9b69c
                            
                            do
                                *ecx_3 = 0
                                ecx_3 += 0x1c
                                i += 1
                            while (i s< *(esi + 0xbbaa84))
                        
                        *(esi + 0xbbaab0) = 2
                        *(esi + 0xbbaab4) = edi
                        sub_4e3c30(0)
                        void* edx_6 = data_1150b94
                        int32_t eax_10 = 0
                        int32_t esi_1 = *(edx_6 + 0xbbaa84)
                        
                        if (esi_1 s> 0)
                            void* ecx_4 = edx_6 + 0xb9b69c
                            
                            do
                                if (*ecx_4 != 0 && eax_10 != edi)
                                    *(edx_6 + 0xbbaab4) = eax_10
                                    eax_10.b = 1
                                    *(edx_6 + 0xbbaab0) = 1
                                    return eax_10
                                
                                eax_10 += 1
                                ecx_4 += 0x1c
                            while (eax_10 s< esi_1)
                        
                        *(edx_6 + 0xbbaab0) = 0
                        eax_10.b = 1
                        return eax_10
                    case 0x26
                        eax_2 = *(esi + 0xbbaa9c)
                        
                        if (eax_2 s>= 0)
                            *(esi + 0xbbaa9c) = eax_2 - 1
                            
                            if (eax_2 - 1 s>= 0 && eax_2 - 1 s< *(esi + 0xbbaaa8))
                                *(esi + 0xbbaaa8) = eax_2 - 1
                                eax_2.b = 1
                                return eax_2
                        
                        eax_2.b = 1
                        return eax_2
                    case 0x27
                        eax_2 = *(esi + 0xbbaa9c)
                        
                        if (eax_2 s< 0)
                            eax_2.b = 1
                            return eax_2
                        
                        *(esi + 0xbbaab4) = *(esi + (eax_2 << 2) + 0xbb6c04)
                        int32_t eax_12
                        eax_12.b = 1
                        *(esi + 0xbbaab0) = 1
                        *(esi + 0xbbaa9c) = 0
                        *(esi + 0xbbaaa8) = 0
                        return eax_12
                    case 0x28
                        int32_t ecx_2 = *(esi + 0xbbaa9c)
                        
                        if (ecx_2 s< *(esi + 0xbbaaac) - 1)
                            *(esi + 0xbbaa9c) = ecx_2 + 1
                            eax_2 = ecx_2 + 1 - *(esi + 0xbbaaa4) + 1
                            
                            if (eax_2 s> *(esi + 0xbbaaa8))
                                *(esi + 0xbbaaa8) = eax_2
                                eax_2.b = 1
                                return eax_2
                        
                        eax_2.b = 1
                        return eax_2
                    case 0x43
                        *(esi + 0xbbaa8e) = 1
                        eax.b = 1
                        return eax
                    case 0x48
                        eax.b = *(esi + 0xbbaa8d) == 0
                        *(esi + 0xbbaa8d) = eax.b
                        eax.b = 1
                        return eax
                    case 0x53
                        int32_t eax_6
                        eax_6.b = 1
                        *(esi + 0xbbaa90) = mods.dp.d(sx.q(*(esi + 0xbbaa90) + 1), 5)
                        return eax_6
        else if (eax == 0 && *(esi + 0xbbaa94) != eax.b && *(data_114e818 + 0x20) != 0)
            eax = arg1[1]
            
            if (eax == 0x5b)
                eax_2 = *(esi + 0xbbaa98)
                
                if (eax_2 s<= 0)
                    eax_2.b = 1
                    return eax_2
                
                *(esi + 0xbbaa98) = eax_2 - 1
                void* eax_13
                eax_13.b = 1
                return eax_13
            
            if (eax == 0x5d)
                eax_2 = *(esi + 0xbbaa98)
                
                if (eax_2 s< 0x28)
                    *(esi + 0xbbaa98) = eax_2 + 1
                
                eax_2.b = 1
                return eax_2
    
    eax.b = 0
    return eax
}
