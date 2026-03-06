// 函数名称: sub_4fdf10
// 虚拟地址: 0x4fdf10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4fdf10(int32_t arg1, int32_t arg2, int32_t* arg3, float arg4 @ xmm2, int128_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_c = eax_1
    
    if (arg3 == 0)
        *arg5 = data_63c264
        arg5[1] = data_63c274
        @__security_check_cookie@4(var_c ^ &__saved_ebp)
        return arg5
    
    char const* const var_94
    int32_t var_90
    char const* const var_8c
    char* ecx_2
    
    if (arg3[1] == 2)
        eax_1 = sub_4981f0(arg3)
        void* ecx_3 = *eax_1
        
        if (*(ecx_3 + 0x60) s> 0)
            eax_1 = *(*(ecx_3 + 0x68) + 0x10)
            
            if (*(ecx_3 + 0x20) s> 0)
                int128_t* esi_1 = *(ecx_3 + 0x28)
                int32_t edx = *(esi_1 + 0x38)
                
                if (edx s>= 0)
                    int128_t var_38
                    sub_4f1990(eax_1, edx, eax_1, arg4, &var_38)
                    int64_t var_28
                    int64_t var_6c = var_28
                    int128_t xmm0_3 = var_38
                    int32_t var_20
                    int32_t var_64 = var_20
                    int32_t eax_5 = *(esi_1 + 0x18)
                    float var_1c
                    float var_18
                    float var_14
                    float var_80 = (var_1c + var_18 + var_14) * 0.333333343f
                    int128_t var_58 = var_80.o
                    int32_t var_64_1 = eax_5
                    int128_t var_48 = xmm0_3
                    int64_t var_6c_1 = esi_1[1].q
                    int128_t xmm0_11 = *esi_1
                    var_80 = (esi_1[2].d f+ *(esi_1 + 0x1c) f+ *(esi_1 + 0x24)) * 0.333333343f
                    int128_t var_2c = var_80.o
                    var_1c.o = xmm0_11
                    sub_4ddac0(&var_58, &var_38:0xc, &var_80, &var_58)
                    *arg5 = var_80.o
                    arg5[1] = xmm0_11
                    @__security_check_cookie@4(var_c ^ &__saved_ebp)
                    return arg5
                
                var_8c = "AnimPathGetPosAtTime"
                var_90 = 0x498
                ecx_2 = "hardpoint->hardpointBoneIndex >= 0"
            else
                var_8c = "AnimPathGetPosAtTime"
                var_90 = 0x496
                ecx_2 = "pAnimStructure->pStructureImportData->hardpointCount > 0"
        else
            var_8c = "AnimPathGetPosAtTime"
            var_90 = 0x491
            ecx_2 = "pAnimStructure->pStructureImportData->numAnimClips > animIndex"
        
        var_94 = "d:\ax\trunk\ax2017\engine\animation.cpp"
    else
        var_8c = "StructureGetDef"
        var_90 = 0x559
        var_94 = "d:\ax\trunk\ax2017\engine\structure.cpp"
        ecx_2 = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
    
    sub_489550(eax_1, &data_5b2591, ecx_2, var_94, var_90, var_8c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
