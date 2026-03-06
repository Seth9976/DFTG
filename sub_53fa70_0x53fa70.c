// 函数名称: sub_53fa70
// 虚拟地址: 0x53fa70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_53fa70(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg3[1] == 3)
    if (arg3[1] == 3)
        int32_t* edi_1 = *sub_4981f0(arg3)
        arg2[1] = *edi_1
        arg2[2] = edi_1[1]
        arg2[4] = arg4
        int32_t eax_4 = sub_5233d0(arg4) * *edi_1
        int32_t var_2c_1 = arg2[4]
        int32_t edx = arg2[2]
        int32_t ecx_1 = arg2[1]
        arg2[3] = eax_4
        *arg2 = sub_4c2e40(sub_5235a0(eax_4, edx, ecx_1, var_2c_1))
        int32_t* edx_1 = edi_1[0x12]
        int32_t* ecx_3 = edx_1[2]
        int128_t var_18
        
        if (edi_1[5] == 8)
            var_18.d = ecx_3
            int32_t ecx_4 = *edi_1
            var_18:4.d = ecx_4
            var_18:8.d = edi_1[1]
            var_18:0xc.d = sub_5234e0(ecx_4, edi_1[6])
            int32_t var_8_1 = edi_1[6]
            return sub_523b10(&var_18, arg2)
        
        int32_t var_2c_2 = *edx_1
        int32_t eax_10 = arg2[4]
        var_18 = *arg2
        int32_t var_8_2 = eax_10
        char result = sub_524b30(eax_10, &var_18, ecx_3, ecx_3)
        
        if (result != 0)
            return result
        
        char* eax_11 = arg3[8]
        char* const ecx_6 = &data_5b2591
        
        if (eax_11 != 0)
            ecx_6 = eax_11
        
        char* const var_2c_3 = ecx_6
        sub_489550(sub_4892e0("Failed to read texture %s"), &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\engine\editor\atlasmaker.cpp", 0x2a8, "AtlasLoadFontTexture")
    else
        sub_489550(arg1, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
            "d:\ax\trunk\ax2017\engine\texture.h", 0x86, "TextureGetDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
