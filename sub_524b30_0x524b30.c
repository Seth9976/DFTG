// 函数名称: sub_524b30
// 虚拟地址: 0x524b30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_524b30(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t ecx_1
    eax, ecx_1 = sub_5610f0(arg3, arg4)
    int32_t var_30 = ecx_1
    float* var_8
    int32_t* var_34 = &var_8
    void var_14
    int32_t* var_38 = &var_14
    int32_t var_18
    int32_t* eax_1 = &var_18
    int32_t* var_3c = &var_18
    int32_t var_34_1
    float* eax_2
    char const* const ecx_3
    float* var_1c
    void* edx_2
    float* esi_1
    
    if (eax == 0)
        eax_2 = sub_560da0(eax_1, arg4, arg3, var_3c, var_38, var_34)
        esi_1 = eax_2
        var_1c = esi_1
        
        if (esi_1 != 0)
            eax_2 = var_8
            
            if (eax_2 == 4)
                edx_2 = eax_2 - 2
            label_524baa:
                void* var_c = edx_2
                int32_t var_10 = sub_5234e0(var_18, edx_2)
                sub_523b10(&var_1c, arg2)
                _free(esi_1)
                int32_t result
                result.b = 1
                return result
            
            if (eax_2 == 3)
                edx_2 = eax_2 + 0x11
                goto label_524baa
            
            char const* const var_30_5 = "TextureLoadWithSTB"
            var_34_1 = 0x3c8
            ecx_3 = "Halt"
        else
            char const* const var_30_4 = "TextureLoadWithSTB"
            var_34_1 = 0x3aa
            ecx_3 = "sourceSpec.pImage"
    else
        eax_2 = sub_561010(eax_1, arg4, arg3, var_3c, var_38, var_34)
        esi_1 = eax_2
        var_1c = esi_1
        
        if (esi_1 != 0)
            eax_2 = var_8
            
            if (eax_2 == 4)
                edx_2 = &eax_2[0x1c]
                goto label_524baa
            
            if (eax_2 == 3)
                edx_2 = 0x3e8
                goto label_524baa
            
            if (eax_2 == 1)
                edx_2 = 0x72
                goto label_524baa
            
            char const* const var_30_3 = "TextureLoadWithSTB"
            var_34_1 = 0x399
            ecx_3 = "Halt"
        else
            char const* const var_30_1 = "TextureLoadWithSTB"
            var_34_1 = 0x389
            ecx_3 = "sourceSpec.pImage"
    sub_489550(eax_2, &data_5b2591, ecx_3, "d:\ax\trunk\ax2017\engine\textureimport.cpp", var_34_1, 
        "TextureLoadWithSTB")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
