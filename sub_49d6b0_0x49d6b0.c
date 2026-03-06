// 函数名称: sub_49d6b0
// 虚拟地址: 0x49d6b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_49d6b0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4_1 = ebp
    void* ecx
    void* edx
    ecx, edx = __alloca_probe(0x1024)
    void var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    void* result = arg1
    int32_t* ebx = nullptr
    int32_t* arg_c
    int32_t* ecx_1 = arg_c
    int32_t* esi_1 = *arg2
    arg1 = edx
    __return_addr = result
    int32_t* var_4 = ecx_1
    arg_c = nullptr
    
    if (esi_1 s>= 0x3e8)
        sub_489550(result, &data_5b2591, "attribMap.attributeCount < 1000", 
            "d:\ax\trunk\ax2017\engine\ui2.cpp", 0xf58, "UI2MergeAttribMap")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t i = 0
    int32_t arg_14[0x200]
    int32_t arg_814[0x201]
    
    if (esi_1 s> 0)
        do
            sub_49b170(&arg_c, i, arg2, ecx, ecx_1, &arg_c, &arg_814, &arg_14, edx, result, 
                ecx + 0x93c, arg2.b)
            edx = arg1
            i += 1
            result = __return_addr
            ecx_1 = var_4
        while (i s< *arg2)
        
        ebx = arg_c
    
    int32_t esi_2 = 0
    
    if (ebx s> 0)
        do
            float xmm0_1 = arg_14[esi_2]
            xmm0_1 - 1f
            int32_t* ecx_3 = arg_814[esi_2]
            result:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
                | (xmm0_1 < 1f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                int32_t* var_18_2 = ecx_3
                result = sub_49d380(__return_addr, ecx + 0x93c, ecx_3, var_4, arg2.b, xmm0_1)
            else
                result = sub_49d6b0(__return_addr, ecx_3, var_4, 0)
            
            esi_2 += 1
        while (esi_2 s< ebx)
    
    @__security_check_cookie@4(eax_1 ^ &var_8)
    return result
}
