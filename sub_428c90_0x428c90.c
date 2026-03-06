// 函数名称: sub_428c90
// 虚拟地址: 0x428c90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_428c90(int32_t arg1)
{
    // 第一条实际指令: if (data_6d00b8 != 1)
    if (data_6d00b8 != 1)
        int32_t var_2c_3 = 0xffffffff
        data_1511894 = 0
        sub_4a8570(arg1)
        data_1511890
    else
        if (data_1511894 == 0)
            int32_t var_2c_1 = 0xffffffff
            sub_4a8570(arg1)
        
        int32_t var_2c_2 = 0xffffffff
        sub_4a8570(arg1)
        int32_t eax = data_6d00bc
        data_1511894 = 1
        int32_t eax_1 = eax & 0x80000001
        
        if (eax_1 s< 0)
            eax_1 = ((eax_1 - 1) | 0xfffffffe) + 1
        
        int32_t eax_4 = neg.d(eax_1)
        data_1511890 = neg.d(sbb.d(eax_4, eax_4, eax_1 != 0))
    
    int32_t var_2c_4 = 0xffffffff
    sub_4a8570(arg1)
    void* eax_7 = sub_437f10(*(data_6d00d8 + 0xbe4))
    int32_t esi_1 = 0
    int32_t eax_8 = data_6d00bc
    int32_t ebx = 0
    
    for (int32_t i = 0; i s< 0xdc; )
        void* eax_9 = sub_426fb0()
        int32_t ecx_4 = *(i + eax_9 + 0x1c)
        
        if (ecx_4 != 0 && (ecx_4 != 2 || *(i + eax_9 + 0x20) != 1) && eax_8 != ebx)
            esi_1 += 1
        
        i += 0x2c
        ebx += 1
    
    void* result = data_6d00ac
    int32_t eax_10
    
    if (result == 1)
        int32_t var_2c_5 = 0xffffffff
        sub_4a8570(arg1)
        int32_t var_2c_6 = 0
        sub_4a8570(arg1)
        int32_t var_2c_7 = 1
        sub_4a8570(arg1)
        result = data_6d00b0
        
        if (result == 0)
            int32_t var_2c_8 = 1
            sub_4a8570(arg1)
            int32_t var_2c_9 = 0
            sub_4a8570(arg1)
            int32_t var_2c_10 = 1
            eax_10 = sub_4a8570(arg1)
            
            if (esi_1 s< 2)
                int32_t var_2c_11 = 1
                eax_10 = sub_4a8570(arg1)
            
            int32_t var_2c_12 = 0xffffffff
            return sub_4a8830(eax_10, &data_62babc, arg1, 2, 0xffffffff)
        
        if (result == 1)
            int32_t var_2c_13 = 0
            sub_4a8570(arg1)
            void* eax_11 = eax_7
            int32_t i_1 = 0
            int32_t i_2 = 0
            
            if (*(eax_11 + 0x260) s> 0)
                void* eax_12 = eax_11 + 0x254
                void* var_14_1 = eax_12
                
                do
                    int32_t eax_13 = sub_4289f0(*eax_12)
                    
                    if (eax_13 != 0xffffffff)
                        sub_428930(eax_13, i_2, arg1, eax_13)
                        i_2 += 1
                    
                    i_1 += 1
                    eax_12 = var_14_1 + 4
                    var_14_1 = eax_12
                while (i_1 s< *(eax_7 + 0x260))
                
                eax_11 = eax_7
            
            void* ebx_1 = 0xffffffff
            
            if (i_2 s< 3)
                void* ecx_16 = eax_11 + 0x254
                
                do
                    eax_11 = sub_428a60(eax_11, *(eax_11 + 0x260), ecx_16, ebx_1)
                    ebx_1 = eax_11
                    
                    if (ebx_1 == 0xffffffff)
                        break
                    
                    sub_428930(eax_11, i_2, arg1, ebx_1)
                    eax_11 = eax_7
                    i_2 += 1
                    ecx_16 = eax_11 + 0x254
                while (i_2 s< 3)
            
            int32_t var_30_2
            char* ecx_18
            
            if (arg1 == 0)
                char const* const var_2c_17 = "DataArray<struct UI2>::DataArrayGet"
                var_30_2 = 0x6c
                ecx_18 = "id != DATAID_NULL"
            label_429063:
                sub_489550(eax_11, &data_5b2591, ecx_18, "d:\ax\trunk\ax2017\engine\dataarray.h", 
                    var_30_2, "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            eax_11 = zx.d(arg1.w)
            void* ecx_20
            
            if (eax_11 u< data_63e5ac)
                ecx_20 = eax_11 * 0x1418 + data_63e5a8
            
            if (eax_11 u>= data_63e5ac || *(ecx_20 + 0x1410) != arg1)
                char const* const var_2c_29 = "DataArray<struct UI2>::DataArrayGet"
                var_30_2 = 0x6d
                ecx_18 = "DataArrayTryToGet(id) != NULL"
                goto label_429063
            
            sub_4a8420(eax_11, &data_62ba14, ecx_20, 0x3f800000, i_2)
            eax_10 = i_2 + 1
        label_429034:
            int32_t var_2c_28 = 0xffffffff
            return sub_4a8830(eax_10, &data_62babc, arg1, eax_10, 0xffffffff)
    else if (result == 0)
        int32_t var_2c_19 = 0xffffffff
        sub_4a8570(arg1)
        int32_t var_2c_20 = 0
        sub_4a8570(arg1)
        int32_t var_2c_21 = 1
        sub_4a8570(arg1)
        result = data_6d00b0
        
        if (result == 0)
            void* result_1 = result
            sub_4a8570(arg1)
            int32_t var_2c_22 = 0
            sub_4a8570(arg1)
            int32_t var_2c_23 = 1
            sub_4a8570(arg1)
            int32_t var_2c_24 = 2
            int32_t var_2c_25 = 0xffffffff
            return sub_4a8830(sub_4a8570(arg1), &data_62babc, arg1, 3, 0xffffffff)
        
        if (result == 1)
            void* result_2 = result
            sub_4a8570(arg1)
            int32_t ebx_2 = 0
            int32_t edi = 0
            int32_t eax_16 = *(data_6d00d8 + 0xbe0)
            
            if (eax_16 s> 0)
                do
                    void* eax_17 = sub_437ec0(edi)
                    
                    if (*(eax_17 + 0x240) != *(eax_7 + 0x240))
                        sub_4288b0(eax_17, ebx_2, arg1, eax_17)
                        ebx_2 += 1
                    
                    edi += 1
                while (edi s< eax_16)
            
            int32_t var_2c_27 = ebx_2
            sub_4a8570(arg1)
            eax_10 = ebx_2 + 1
            goto label_429034
    return result
}
