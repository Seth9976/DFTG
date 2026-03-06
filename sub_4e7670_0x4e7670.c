// 函数名称: sub_4e7670
// 虚拟地址: 0x4e7670
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4e7670()
{
    // 第一条实际指令: int32_t* eax = data_aca1ec
    int32_t* eax = data_aca1ec
    int32_t ebx
    
    if (eax[7] == 0 || data_115107f == 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    int32_t esi = data_1150ddc
    
    if (*((esi << 2) + &data_1150dc4) == 0 && ebx.b == 0)
        sub_4e7580(eax, 3, (esi << 2) + &data_1150dc4, &data_1150de4)
        int32_t eax_1 = data_1150ddc
        sub_4e7580(eax_1, 3, (eax_1 << 2) + &data_1150dc8, &data_1150dec)
        esi = data_1150ddc
        eax = data_aca1ec
    
    if (eax[7] == 0 || *((esi << 2) + &data_1150dbc) != 0)
        goto label_4e785d
    
    int32_t var_10_1 = 0
    eax = sub_4d2c50(eax, data_1150de8, data_1150de4, 1, 5)
    *((esi << 2) + &data_1150dbc) = eax
    int32_t esi_1 = data_1150ddc
    int32_t* ecx_3 = *((esi_1 << 2) + &data_1150dc0)
    char const* const var_18
    int32_t var_14
    char const* const var_10_3
    char* ecx_5
    
    if (ecx_3 != 0)
        if (ecx_3[1] == 3)
            void** eax_2 = sub_4981f0(ecx_3)
            **eax_2 = data_1150dec
            eax = data_1150df0
            *(*eax_2 + 4) = eax
            goto label_4e7787
        
        var_10_3 = "TextureGetDef"
        var_14 = 0x86
        var_18 = "d:\ax\trunk\ax2017\engine\texture.h"
        ecx_5 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    else
        int32_t* var_10_2 = ecx_3
        eax = sub_4d2c50(eax, data_1150df0, data_1150dec, 1, 5)
        *((esi_1 << 2) + &data_1150dc0) = eax
    label_4e7787:
        int32_t esi_2 = data_1150ddc
        int32_t* ecx_8 = *((esi_2 << 2) + &data_1150dd4)
        
        if (ecx_8 != 0)
            if (ecx_8[1] == 3)
                void** eax_3 = sub_4981f0(ecx_8)
                **eax_3 = data_1150de4
                eax = data_1150de8
                *(*eax_3 + 4) = eax
                goto label_4e77f2
            
            var_10_3 = "TextureGetDef"
            var_14 = 0x86
            var_18 = "d:\ax\trunk\ax2017\engine\texture.h"
            ecx_5 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
        else
            int32_t* var_10_4 = ecx_8
            eax = sub_4d2c50(eax, data_1150de8, data_1150de4, 0x50, 6)
            *((esi_2 << 2) + &data_1150dd4) = eax
        label_4e77f2:
            int32_t esi_3 = data_1150ddc
            int32_t* ecx_12 = *((esi_3 << 2) + &data_1150dd8)
            
            if (ecx_12 != 0)
                if (ecx_12[1] == 3)
                    void** eax_4 = sub_4981f0(ecx_12)
                    **eax_4 = data_1150dec
                    eax = data_1150df0
                    *(*eax_4 + 4) = eax
                    goto label_4e785d
                
                var_10_3 = "TextureGetDef"
                var_14 = 0x86
                var_18 = "d:\ax\trunk\ax2017\engine\texture.h"
                ecx_5 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
            else
                int32_t* var_10_5 = ecx_12
                eax = sub_4d2c50(eax, data_1150df0, data_1150dec, 0x50, 6)
                *((esi_3 << 2) + &data_1150dd8) = eax
            label_4e785d:
                
                if (data_1150dcc != 0 || ebx.b != 0)
                    return eax
                
                int32_t ecx_16 = data_1150de4
                int32_t edx_8
                
                if (ecx_16 == data_1150dec)
                    edx_8 = data_1150de8
                
                if (ecx_16 != data_1150dec || edx_8 != data_1150df0)
                    var_10_3 = "VRBindEyeTextures"
                    var_14 = 0xce
                    var_18 = "d:\ax\trunk\ax2017\engine\vr.cpp"
                    ecx_5 = "gVR.hmdInfo.renderBufferSize[0] == gVR.hmdInfo.renderBufferSize[1]"
                else
                    int32_t var_10_6 = 0
                    eax = sub_4d2c50(eax, edx_8, ecx_16, 0x50, 4)
                    int32_t* ecx_17 = data_1150dd0
                    data_1150dcc = eax
                    
                    if (ecx_17 == 0)
                        int32_t* var_10_7 = ecx_17
                        eax = sub_4d2c50(eax, data_1150df0, data_1150dec, 0x50, 4)
                        data_1150dd0 = eax
                        return eax
                    
                    if (ecx_17[1] == 3)
                        int32_t* eax_5 = sub_4981f0(ecx_17)
                        **eax_5 = data_1150dec
                        int32_t eax_6 = data_1150df0
                        *(*eax_5 + 4) = eax_6
                        return eax_6
                    
                    var_10_3 = "TextureGetDef"
                    var_14 = 0x86
                    var_18 = "d:\ax\trunk\ax2017\engine\texture.h"
                    ecx_5 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    
    sub_489550(eax, &data_5b2591, ecx_5, var_18, var_14, var_10_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
