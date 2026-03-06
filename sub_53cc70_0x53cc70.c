// 函数名称: sub_53cc70
// 虚拟地址: 0x53cc70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_53cc70(float* arg1, void* arg2, void* arg3, int32_t* arg4, float* arg5)
{
    // 第一条实际指令: int32_t* esi = arg4
    int32_t* esi = arg4
    int64_t var_14 = 0
    int32_t edx = esi[6]
    int32_t var_c = 0
    
    if (edx != 0)
        int32_t* eax_1 = *(data_1151ae8 + 8)
        arg1 = (*(*eax_1 + 0x38))(eax_1, edx, 0, 4, 0, &var_14)
    
    int32_t var_28_1
    char const* const ecx_1
    
    if (edx == 0 || arg1 s>= 0)
        int32_t i = 0
        
        if (*(arg2 + 4) s> 0)
            void* esi_1 = arg2 + 8
            
            do
                int32_t ecx_3
                arg1, ecx_3 = sub_53c3e0(arg1, arg5, esi_1, var_14.d)
                
                if (arg1.b == 0)
                    int32_t var_24_4 = ecx_3
                    arg1 = sub_53c9f0(arg4, esi_1, arg3, *arg4)
                
                i += 1
                esi_1 += 0x14
            while (i s< *(arg2 + 4))
            
            esi = arg4
        
        int32_t edx_3 = esi[6]
        
        if (edx_3 == 0)
            return 
        
        int32_t* eax_4 = *(data_1151ae8 + 8)
        (*(*eax_4 + 0x3c))(eax_4, edx_3, 0)
        arg1 = *esi
        
        if (arg1 == 3)
            int32_t* eax_6 = *(data_1151ae8 + 8)
            (*(*eax_6 + 0x1c))(eax_6, 0, 1, &esi[6])
            return 
        
        if (arg1 == 4)
            int32_t* eax_8 = *(data_1151ae8 + 8)
            (*(*eax_8 + 0x40))(eax_8, 0, 1, &esi[6])
            return 
        
        char const* const var_24_7 = "Dx11SetRenderState"
        var_28_1 = 0x813
        ecx_1 = "Halt"
    else
        char const* const var_24_2 = "Dx11SetRenderState"
        var_28_1 = 0x7f6
        ecx_1 = "SUCCEEDED(hr)"
    
    sub_489550(arg1, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 
        var_28_1, "Dx11SetRenderState")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
