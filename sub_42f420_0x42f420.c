// 函数名称: sub_42f420
// 虚拟地址: 0x42f420
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_42f420(int32_t arg1)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    int32_t* eax = sub_4b2440(edi, sub_42e1d0)
    int32_t* ebx = data_6cfe4c
    data_6cff9c = 0
    data_6d00a0 = 0
    
    if (ebx != 0)
        void* const i_2 = nullptr
        sub_426820(&ebx[0x212], &i_2)
        void* const i = i_2
        
        if (i != 0xffffffff)
            do
                if (*(i + 0x1d0) == 0)
                    int32_t eax_4 = *(i + 0x1e0)
                    void* esi_1 = i + 0x28
                    int32_t edi_1 = 0
                    
                    while (true)
                        if (*(esi_1 - 4) == 1)
                            void* eax_5 = sub_437f10(*(data_6d00d8 + 0xbe4))
                            
                            if (*esi_1 == *(eax_5 + 0x230))
                                *((data_6cff9c << 2) + &data_6cfe9c) = eax_4
                                data_6cff9c += 1
                                break
                        
                        edi_1 += 1
                        esi_1 += 0x2c
                        
                        if (edi_1 s>= 5)
                            *((data_6d00a0 << 2) + &data_6cffa0) = eax_4
                            data_6d00a0 += 1
                            break
                else
                    int32_t ecx_2 = *(i + 0x1d8)
                    int32_t eax_2 = adc.d(*(i + 0x1dc), 0, ecx_2 u>= 0xfffff448)
                    int32_t temp1_1 = ebx[1]
                    
                    if (eax_2 s<= temp1_1 && (eax_2 s< temp1_1 || ecx_2 + 0xbb8 u< *ebx))
                        int32_t ecx_4 = ebx[0x215]
                        ebx[0x215] = zx.d(*(i + 0x1e0))
                        *(i + 0x1e0) = ecx_4
                        ebx[0x216] -= 1
                
                sub_426820(&ebx[0x212], &i_2)
                i = i_2
            while (i != 0xffffffff)
            
            edi = arg1
        
        int32_t ecx_10 = data_6d00a0 << 2
        int32_t eax_9 = ecx_10 s>> 2
        sub_436380(eax_9, ecx_10 + &data_6cffa0, &data_6cffa0, eax_9, sub_42f370)
        int32_t ecx_11 = data_6cff9c << 2
        int32_t eax_12 = ecx_11 s>> 2
        sub_436380(eax_12, ecx_11 + &data_6cfe9c, &data_6cfe9c, eax_12, sub_42f370)
        int32_t ebx_1 = 0
        void* esi_2 = nullptr
        
        while (true)
            int32_t edi_2
            
            if (*(esi_2 + 0x151271c) != "tblGamesYours" || *(esi_2 + 0x1512718) != edi
                || *(esi_2 + 0x1512720) != ebx_1 || *(esi_2 + 0x1512724) != 0)
            label_42f5fc:
                edi_2 = sub_4bab10(ebx_1)
                *(esi_2 + 0x1512738) = edi_2
                
                if (edi_2 != 0)
                    *(esi_2 + 0x151271c) = "tblGamesYours"
                    *(esi_2 + 0x1512718) = arg1
                    *(esi_2 + 0x1512720) = ebx_1
                    *(esi_2 + 0x1512724) = 0
            else
                edi_2 = *(esi_2 + 0x1512738)
                
                if (edi_2 == 0)
                    goto label_42f5fc
                
                uint32_t eax_13 = zx.d(edi_2.w)
                
                if (eax_13 u>= data_63e5ac || *(eax_13 * 0x1418 + data_63e5a8 + 0x1410) != edi_2)
                    goto label_42f5fc
            
            int32_t eax_20 = ebx_1 + (data_6cfe94 << 2)
            
            if (eax_20 s< data_6cff9c)
                eax = *((eax_20 << 2) + &data_6cfe9c)
            
            if (eax_20 s< data_6cff9c && eax != 0)
                void* ecx_14 = data_6cfe4c
                
                if (ecx_14 == 0)
                    break
                
                int32_t* eax_21 = sub_426880(ecx_14 + 0x848, eax)
                
                if (edi_2 != 0)
                    sub_42f080(eax_21, &eax_21[2], edi_2, 0)
            else if (edi_2 != 0)
                int32_t var_24_5 = 0xffffffff
                sub_4a8570(edi_2)
            
            int32_t edi_3
            
            if (*(esi_2 + 0x15127ac) != "tblGamesOpen" || *(esi_2 + 0x15127a8) != arg1
                || *(esi_2 + 0x15127b0) != ebx_1 || *(esi_2 + 0x15127b4) != 0)
            label_42f703:
                edi_3 = sub_4bab10(ebx_1)
                *(esi_2 + 0x15127c8) = edi_3
                
                if (edi_3 != 0)
                    *(esi_2 + 0x15127ac) = "tblGamesOpen"
                    *(esi_2 + 0x15127a8) = arg1
                    *(esi_2 + 0x15127b0) = ebx_1
                    *(esi_2 + 0x15127b4) = 0
            else
                edi_3 = *(esi_2 + 0x15127c8)
                
                if (edi_3 == 0)
                    goto label_42f703
                
                uint32_t eax_22 = zx.d(edi_3.w)
                
                if (eax_22 u>= data_63e5ac || *(eax_22 * 0x1418 + data_63e5a8 + 0x1410) != edi_3)
                    goto label_42f703
            
            eax = ebx_1 + (data_6cfe98 << 2)
            
            if (eax s>= data_6d00a0)
            label_42f77c:
                
                if (edi_3 != 0)
                    int32_t var_24_8 = 0xffffffff
                    eax = sub_4a8570(edi_3)
            else
                eax = *((eax << 2) + &data_6cffa0)
                
                if (eax == 0)
                    goto label_42f77c
                
                void* ecx_19 = data_6cfe4c
                
                if (ecx_19 == 0)
                    break
                
                eax = sub_426880(ecx_19 + 0x848, eax)
                
                if (edi_3 != 0)
                    eax = sub_42f080(eax, &eax[2], edi_3, 1)
            
            esi_2 += 0x24
            ebx_1 += 1
            
            if (esi_2 s>= 0x90)
                void* ecx_23 = data_6cfe4c
                
                if (ecx_23 == 0)
                    break
                
                int32_t ebx_2 = 0
                int32_t edi_4 = 0
                i_2 = nullptr
                int32_t var_14_2 = 0
                sub_426820(ecx_23 + 0x848, &i_2)
                
                for (void* const i_1 = i_2; i_1 != 0xffffffff; i_1 = i_2)
                    int32_t edi_5 = 0
                    void* esi_3 = i_1 + 0x28
                    int32_t ecx_25
                    
                    while (true)
                        if (*(esi_3 - 4) == 1)
                            void* eax_28 = sub_437f10(*(data_6d00d8 + 0xbe4))
                            
                            if (*esi_3 == *(eax_28 + 0x230))
                                ecx_25.b = 0
                                break
                        
                        edi_5 += 1
                        esi_3 += 0x2c
                        
                        if (edi_5 s>= 5)
                            ecx_25.b = 1
                            break
                    
                    char temp2_1 = ecx_25.b
                    
                    if (temp2_1 == 0)
                        ebx_2 += 1
                    
                    edi_4 = var_14_2 + 1
                    
                    if (temp2_1 == 0)
                        edi_4 = var_14_2
                    
                    var_14_2 = edi_4
                    sub_426820(ecx_23 + 0x848, &i_2)
                
                int32_t eax_31
                int32_t edx_10
                edx_10:eax_31 = sx.q(ebx_2 + 3)
                int32_t eax_33 = (eax_31 + (edx_10 & 3)) s>> 2
                
                if (eax_33 s< 1)
                    eax_33 = 1
                
                if (data_6cfe94 == 0)
                    int32_t var_24_11 = 0xffffffff
                    sub_4a8570(arg1)
                
                if (data_6cfe94 s>= eax_33 - 1)
                    int32_t var_24_12 = 0xffffffff
                    sub_4a8570(arg1)
                
                if (ebx_2 s>= 0x40)
                    int32_t var_24_13 = 0xffffffff
                    sub_4a8570(arg1)
                
                int32_t eax_36
                int32_t edx_15
                edx_15:eax_36 = sx.q(edi_4 + 3)
                int32_t edi_7 = ((edx_15 & 3) + eax_36) s>> 2
                
                if (edi_7 s< 1)
                    edi_7 = 1
                
                if (data_6cfe98 == 0)
                    int32_t var_24_14 = 0xffffffff
                    sub_4a8570(arg1)
                
                int32_t result = edi_7 - 1
                
                if (data_6cfe98 s< result)
                    return result
                
                int32_t var_24_15 = 0xffffffff
                return sub_4a8570(arg1)
            
            edi = arg1
    
    sub_489550(eax, &data_5b2591, "gClient", "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
        0x75, "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
