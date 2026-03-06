// 函数名称: sub_53f830
// 虚拟地址: 0x53f830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_53f830(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t* var_58 = eax
    char const* const var_6c
    int32_t var_68
    char const* const var_64
    char* ecx
    
    if (eax[1] == 3)
        int32_t* edi_1 = *sub_4981f0(arg1)
        int32_t eax_2 = arg2[0x10]
        
        if (*edi_1 s> eax_2 || edi_1[1] s> eax_2)
            char* const ecx_10 = &data_5b2591
            char* eax_29 = var_58[8]
            
            if (eax_29 != 0)
                ecx_10 = eax_29
            
            char* const var_64_7 = ecx_10
            sub_4892e0("AtlasMaker: Texture too large for atlas %s")
            return 3
        
        float var_50
        
        if (sub_543fd0(eax_2, edi_1, &var_50, arg2) == 0)
            char* const ecx_2 = &data_5b2591
            char* eax_5 = var_58[8]
            
            if (eax_5 != 0)
                ecx_2 = eax_5
            
            char* const var_64_2 = ecx_2
            sub_4892e0("AtlasMaker: Image load failed %s")
            return 3
        
        eax = sub_53f6d0(&var_50, arg2)
        int32_t var_48
        
        if (eax == 1)
            if (var_48 != 0)
                _aligned_free_base(var_48)
            
            return 1
        
        if (eax == 2)
            float ecx_4 = var_50
            int32_t edx_2 = arg2[0xc]
            float var_20_1 = ecx_4
            int32_t var_4c
            int32_t var_1c_1 = var_4c
            int32_t var_14_1 = edx_2
            int32_t var_18_1 = sub_5234e0(ecx_4, edx_2)
            int32_t var_24 = var_48
            int32_t var_44
            sub_53f370(var_48, &var_44, &var_24, arg2)
            int32_t* eax_12 = sub_498440(0x1c)
            eax_12[3] += 1
            int32_t* ecx_6 = *eax_12
            int32_t* edx_4
            
            if (ecx_6 != 0)
                edx_4 = eax_12
            else
                sub_4982d0(eax_12)
                edx_4 = eax_12
                ecx_6 = *edx_4
            
            *edx_4 = *ecx_6
            ecx_6[6] = 0
            *ecx_6 = var_50.o
            int32_t var_40
            ecx_6[4] = var_40
            ecx_6[5] = 0
            ecx_6[6] = arg2[7]
            void* eax_16 = arg2[7]
            
            if (eax_16 == 0)
                arg2[8] += 1
                arg2[6] = ecx_6
                arg2[7] = ecx_6
            else
                *(eax_16 + 0x14) = ecx_6
                arg2[8] += 1
                arg2[7] = ecx_6
            
        label_53f9d3:
            edi_1[0xa] = arg2[0x11]
            edi_1[0xc] = arg2[0x12]
            edi_1[0xd] = var_44
            edi_1[0xe] = var_40
            *edi_1 = var_50
            edi_1[1] = var_4c
            edi_1[2] = arg2[0x13]
            sub_53f7b0(var_58)
            return 2
        
        if (eax == 0)
            char* const ecx_8 = &data_5b2591
            char* eax_18 = var_58[8]
            
            if (eax_18 != 0)
                ecx_8 = eax_18
            
            char* const var_64_5 = ecx_8
            sub_4892e0("Atlas Maker: Duplicate image only included once: %s")
            
            if (var_48 != 0)
                _aligned_free_base(var_48)
            
            goto label_53f9d3
        
        var_64 = "AtlasMakerPlaceAssetTexture"
        var_68 = 0x27f
        var_6c = "d:\ax\trunk\ax2017\engine\editor\atlasmaker.cpp"
        ecx = "Halt"
    else
        var_64 = "TextureGetDef"
        var_68 = 0x86
        var_6c = "d:\ax\trunk\ax2017\engine\texture.h"
        ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    
    sub_489550(eax, &data_5b2591, ecx, var_6c, var_68, var_64)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
