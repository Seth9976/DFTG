// 函数名称: sub_4fbdc0
// 虚拟地址: 0x4fbdc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4fbdc0(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t ebx = 0
    void* var_c = nullptr
    int32_t esi = 0
    int32_t eax = arg2[2]
    int32_t edx = eax << 2
    
    if (eax s> 0)
        do
            void* eax_1 = sub_4fba90(eax, arg2, arg3, esi, arg5)
            
            if (esi == 0 || var_c != eax_1)
                var_c = eax_1
                ebx += 1
            
            eax = arg2[2]
            esi += 1
            arg3 = var_8
        while (esi s< eax)
    
    int32_t* esi_1 = arg4
    void* ebx_2 = ebx * 6
    void* result
    
    if (ebx_2 s>= edx)
        void* ebx_4 = eax << 2
        esi_1[2] = ebx_4
        
        if (ebx_4 != 0)
            void* result_2 = sub_4c2e40(ebx_4)
            _memset(result_2, 0, ebx_4)
            result = result_2
        else
            result = nullptr
        
        *esi_1 = result
        int32_t i = 0
        esi_1[3] = 2
        
        if (arg2[2] s> 0)
            do
                int32_t esi_2 = *esi_1
                result = sub_4fba90(result, arg2, var_8, i, arg5)
                *(esi_2 + (i << 2)) = result
                esi_1 = arg4
                i += 1
            while (i s< arg2[2])
    else
        esi_1[2] = ebx_2
        uint32_t (* eax_2)[0x4]
        
        if (ebx_2 != 0)
            uint32_t (* eax_3)[0x4] = sub_4c2e40(ebx_2)
            _memset(eax_3, 0, ebx_2)
            eax_2 = eax_3
        else
            eax_2 = nullptr
        
        *esi_1 = eax_2
        int32_t eax_5 = *esi_1
        int32_t ebx_3 = 0
        int32_t ecx_3 = ebx_2 s/ 6
        esi_1[3] = 4
        void* result_1 = nullptr
        result = arg2[2]
        int32_t var_2c_2
        char const* const ecx_4
        
        if (result s>= 0xffff)
            char const* const var_28_3 = "FlanimCompressConstantInt"
            var_2c_2 = 0x5f2
            ecx_4 = "pMayaVertex->mFrameCount < MAXUINT16"
        label_4fbf54:
            sub_489550(result, &data_5b2591, ecx_4, "d:\ax\trunk\ax2017\engine\flanim.cpp", var_2c_2, 
                "FlanimCompressConstantInt")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t i_1 = 0
        
        if (result s> 0)
            do
                result = sub_4fba90(result, arg2, var_8, i_1, arg5)
                
                if (i_1 == 0 || result_1 != result)
                    result_1 = result
                    *(eax_5 + (ecx_3 << 2) + (ebx_3 << 1)) = i_1.w
                    *(eax_5 + (ebx_3 << 2)) = result
                    ebx_3 += 1
                
                i_1 += 1
            while (i_1 s< arg2[2])
        
        if (ebx_3 != ecx_3)
            char const* const var_28_7 = "FlanimCompressConstantInt"
            var_2c_2 = 0x601
            ecx_4 = "dataIndex == numValues"
            goto label_4fbf54
    
    return result
}
