// 函数名称: sub_524930
// 虚拟地址: 0x524930
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_524930(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* var_8
    int32_t* var_8
    int32_t eax = __wfopen_s(&var_8, arg2, "rb")
    int32_t* edi = var_8
    
    if (eax != 0)
        edi = nullptr
    
    var_8 = edi
    int32_t eax_1
    
    if (edi != 0)
        eax_1 = sub_561190(edi)
        _fclose(edi)
    
    int32_t var_38_3
    int32_t* eax_2
    char const* const ecx_2
    float* var_24
    int32_t var_20
    int32_t var_1c
    int32_t* var_c
    void* edx_1
    float* edi_1
    
    if (edi == 0 || eax_1 == 0)
        eax_2 = __wfopen_s(&var_c, arg2, "rb")
        int32_t* esi_3 = var_c
        
        if (eax_2 != 0)
            esi_3 = nullptr
        
        var_c = esi_3
        
        if (esi_3 != 0)
            int32_t var_34_5 = 0
            edi_1 = sub_560d20(&var_1c, &var_20, esi_3, &var_1c, &var_8)
            eax_2 = _fclose(esi_3)
            var_24 = edi_1
        
        if (esi_3 != 0 && edi_1 != 0)
            eax_2 = var_8
            
            if (eax_2 == 4)
                edx_1 = eax_2 - 2
            label_524a89:
                int32_t esi_4 = var_20
                void* var_14 = edx_1
                int32_t var_18 = sub_5234e0(esi_4, edx_1)
                int32_t eax_8 = var_1c
                arg1[1] = esi_4
                arg1[2] = eax_8
                arg1[4] = 1
                int32_t eax_9 = sub_5234e0(esi_4, 1)
                int32_t var_34_7 = arg1[4]
                int32_t edx_3 = arg1[2]
                int32_t ecx_6 = arg1[1]
                arg1[3] = eax_9
                *arg1 = sub_4c2e40(sub_5235a0(eax_9, edx_3, ecx_6, var_34_7))
                sub_523b10(&var_24, arg1)
                _free(edi_1)
                int32_t result
                result.b = 1
                return result
            
            if (eax_2 == 3)
                edx_1 = 0x14
                goto label_524a89
            
            char const* const var_34_8 = "TextureLoadFileWithSTB"
            var_38_3 = 0x36d
            ecx_2 = "Halt"
        else
            char const* const var_34_6 = "TextureLoadFileWithSTB"
            var_38_3 = 0x34f
            ecx_2 = "sourceSpec.pImage"
    else
        eax_2 = __wfopen_s(&var_c, arg2, "rb")
        int32_t* esi_2 = var_c
        
        if (eax_2 != 0)
            esi_2 = nullptr
        
        var_c = esi_2
        
        if (esi_2 != 0)
            int32_t var_34_2 = 0
            edi_1 = sub_561090(&var_1c, &var_20, esi_2, &var_1c, &var_8)
            eax_2 = _fclose(esi_2)
            var_24 = edi_1
        
        if (esi_2 != 0 && edi_1 != 0)
            eax_2 = var_8
            
            if (eax_2 == 4)
                edx_1 = &eax_2[0x1c]
                goto label_524a89
            
            if (eax_2 == 3)
                edx_1 = 0x3e8
                goto label_524a89
            
            if (eax_2 == 1)
                edx_1 = eax_2 + 0x71
                goto label_524a89
            
            char const* const var_34_4 = "TextureLoadFileWithSTB"
            var_38_3 = 0x349
            ecx_2 = "Halt"
        else
            char const* const var_34_3 = "TextureLoadFileWithSTB"
            var_38_3 = 0x339
            ecx_2 = "sourceSpec.pImage"
    sub_489550(eax_2, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\engine\textureimport.cpp", var_38_3, 
        "TextureLoadFileWithSTB")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
