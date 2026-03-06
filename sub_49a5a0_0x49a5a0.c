// 函数名称: sub_49a5a0
// 虚拟地址: 0x49a5a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_49a5a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_c = arg1
    int32_t* var_c = arg1
    int32_t* result = arg1
    int32_t edx = *result
    int32_t* result_1 = result
    
    if (edx != 0)
        uint32_t esi_1 = zx.d(edx.w)
        int32_t ecx
        
        if (esi_1 u< data_63e5ac)
            ecx = data_63e5a8
            result = esi_1 * 0x1418
        
        if (esi_1 u>= data_63e5ac || *(result + ecx + 0x1410) != edx)
            sub_489550(result, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t i_3 = 3
        void* edi_2 = esi_1 * 0x1418 + ecx
        int32_t i
        
        do
            char* eax = *(edi_2 + 0xfd4)
            
            if (eax != 0 && eax != &data_5b2591)
                if (data_aca1f4 != 0 && *eax != 0)
                    char* eax_1 = sub_48a080(edi_2 + 0xfd4)
                    int32_t temp1_1 = *(eax_1 + 4)
                    *(eax_1 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(eax_1, *(eax_1 + 0xc) + 0x10)
                
                *(edi_2 + 0xfd4) = &data_5b2591
            
            *(edi_2 + 0xfb0) = &data_5b2591
            i = i_3
            i_3 -= 1
        while (i != 1)
        char* eax_2 = *(edi_2 + 0xfd8)
        
        if (eax_2 != 0 && eax_2 != &data_5b2591)
            if (data_aca1f4 != i_3 && *eax_2 != i_3.b)
                char* eax_3 = sub_48a080(edi_2 + 0xfd8)
                int32_t temp2_1 = *(eax_3 + 4)
                *(eax_3 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
            
            *(edi_2 + 0xfd8) = &data_5b2591
        
        char* eax_4 = *(edi_2 + 0xff0)
        
        if (eax_4 != 0 && eax_4 != &data_5b2591)
            if (data_aca1f4 != 0 && *eax_4 != 0)
                char* eax_5 = sub_48a080(edi_2 + 0xff0)
                int32_t temp3_1 = *(eax_5 + 4)
                *(eax_5 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
            
            *(edi_2 + 0xff0) = &data_5b2591
        
        int32_t ecx_7 = *(edi_2 + 0xe60)
        
        if (ecx_7 != 0)
            sub_4d9790(ecx_7)
            *(edi_2 + 0xe60) = 0
        
        void* ecx_8 = *(edi_2 + 0xe64)
        
        if (ecx_8 != 0)
            sub_4f97b0(ecx_8)
            *(edi_2 + 0xe64) = 0
        
        int32_t eax_6 = *(edi_2 + 0xe74)
        
        if (eax_6 != 0)
            void* ecx_9 = data_114e838
            uint32_t edx_7 = zx.d(eax_6.w)
            
            if (edx_7 u< *(ecx_9 + 4))
                void* esi_3 = edx_7 * 0x64 + *ecx_9
                
                if (*(esi_3 + 0x60) == eax_6)
                    (*(*data_114e834 + 0x24))(esi_3)
                    *(esi_3 + 0x5a) = 0
        
        int32_t ecx_11 = *(edi_2 + 0xe6c)
        
        if (ecx_11 != 0)
            void* eax_8 = sub_4fd250(ecx_11)
            
            if (eax_8 != 0)
                sub_4fd2f0(eax_8)
        
        int32_t ecx_13 = *(edi_2 + 0xe78)
        
        if (ecx_13 != 0)
            void* eax_9 = sub_4dd900(ecx_13)
            
            if (eax_9 != 0)
                sub_4dceb0(eax_9)
        
        int32_t eax_10 = *(edi_2 + 0xe74)
        
        if (eax_10 != 0)
            void* ecx_15 = data_114e838
            uint32_t edx_8 = zx.d(eax_10.w)
            
            if (edx_8 u< *(ecx_15 + 4))
                void* esi_5 = edx_8 * 0x64 + *ecx_15
                
                if (*(esi_5 + 0x60) == eax_10)
                    (*(*data_114e834 + 0x24))(esi_5)
                    *(esi_5 + 0x5a) = 0
        
        int32_t i_1 = 0
        
        if (*(edi_2 + 0x1400) s> 0)
            do
                sub_49a5a0()
                i_1 += 1
            while (i_1 s< *(edi_2 + 0x1400))
        
        void* esi_6 = edi_2 + 0x13ec
        int32_t i_4 = 5
        int32_t i_2
        
        do
            if (*esi_6 != 0)
                sub_49a5a0()
                *esi_6 = 0
            
            esi_6 += 4
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        sub_4bd6d0(edi_2)
        int32_t ecx_21 = data_63e5b4
        data_63e5b4 = zx.d(*(edi_2 + 0x1410))
        result = result_1
        *(edi_2 + 0x1410) = ecx_21
        data_63e5b8 -= 1
        *result = i_4
    
    return result
}
