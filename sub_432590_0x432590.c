// 函数名称: sub_432590
// 虚拟地址: 0x432590
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_432590(int32_t arg1, int32_t* arg2, float arg3 @ xmm2)
{
    // 第一条实际指令: int32_t* edi = arg2
    int32_t* edi = arg2
    int32_t* var_40 = edi
    char var_41_1
    
    if ((*(data_114e840 + 0xc) & 1) != 0)
        var_41_1 = 1
    
    if ((*(data_114e840 + 0xc) & 1) == 0 || *(data_aca1f0 + 0x18) == 0)
        var_41_1 = 0
    
    float var_28
    sub_489e40(&var_28)
    float xmm0_2 = sub_4369e0(arg3 * 8f)
    float xmm0_3
    
    if (0 f<= xmm0_2)
        xmm0_3 = xmm0_2 + 0.5f
    else
        xmm0_3 = xmm0_2 - 0.5f
    
    int32_t esi = 0
    int32_t var_2c = int.d(xmm0_3)
    char* result
    
    while (true)
        int32_t var_54_1 = esi
        result = sub_4a8570(arg1)
        
        if (*edi == 1)
            if (var_41_1 != 0)
                char const* const var_5c
                int32_t var_58
                char const* const var_54_3
                char* ecx_8
                
                if (arg1 == 0)
                label_4328f5:
                    var_54_3 = "DataArray<struct UI2>::DataArrayGet"
                    ecx_8 = "id != DATAID_NULL"
                    var_58 = 0x6c
                label_432901:
                    var_5c = "d:\ax\trunk\ax2017\engine\dataarray.h"
                label_43290b:
                    sub_489550(result, &data_5b2591, ecx_8, var_5c, var_58, var_54_3)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                uint32_t ecx_2 = zx.d(arg1.w)
                
                if (ecx_2 u>= data_63e5ac)
                label_4328bb:
                    var_54_3 = "DataArray<struct UI2>::DataArrayGet"
                    var_58 = 0x6d
                    ecx_8 = "DataArrayTryToGet(id) != NULL"
                    goto label_432901
                
                int32_t edx_2 = data_63e5a8
                result = ecx_2 * 0x1418
                
                if (*(result + edx_2 + 0x1410) != arg1)
                    goto label_4328bb
                
                result = ecx_2 * 0x1418 + edx_2
                
                if (esi s>= *(result + 0x1190))
                    var_54_3 = "UI2GetChild"
                    var_58 = 0x1146
                    var_5c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    ecx_8 = "i < ui.numChildren"
                    goto label_43290b
                
                if (esi s< 0)
                    var_54_3 = "UI2GetChild"
                    var_58 = 0x1147
                    var_5c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    ecx_8 = "i >= 0"
                    goto label_43290b
                
                int32_t ecx_3 = *(result + (esi << 2) + 0x1194)
                
                if (ecx_3 == 0)
                    goto label_4328f5
                
                uint32_t edi_2 = zx.d(ecx_3.w)
                
                if (edi_2 u>= data_63e5ac)
                    goto label_4328bb
                
                result = *(edi_2 * 0x1418 + edx_2 + 0x1410)
                
                if (result != ecx_3)
                    goto label_4328bb
                
                char* result_1 = edi_2 * 0x1418
                int128_t var_20_1 = *(result_1 + edx_2 + 0x10a0)
                float xmm0_5[0x4] = *(result_1 + edx_2 + 0x10a0)
                int32_t xmm3_2 = _mm_shuffle_ps(xmm0_5, xmm0_5, 0xaa)
                
                if (xmm3_2 f< xmm0_5)
                label_4328a5:
                    var_54_3 = "RectContains"
                    var_58 = 0xa4
                    var_5c = "d:\ax\trunk\ax2017\engine\rect.cpp"
                    ecx_8 = "RectIsNormalized(r)"
                    goto label_43290b
                
                float xmm2 = xmm0_5[3]
                float xmm1_1 = xmm0_5[1]
                
                if (xmm2 < xmm1_1)
                    goto label_4328a5
                
                float xmm5_1 = var_28
                float var_24
                
                if (not(xmm5_1 f< xmm0_5) && not(var_24 < xmm1_1) && not(xmm3_2 f< xmm5_1)
                        && not(xmm2 < var_24))
                    edi = var_40
                    result = sub_432440(result, esi, edi, arg3, 0)
                else if (esi == 0)
                    if (edi_2 u>= data_63e5ac || result != ecx_3)
                        goto label_4328bb
                    
                    result = result_1
                    int128_t var_20_3 = *(result + edx_2 + 0x10a0)
                    float xmm0_7[0x4] = *(result + edx_2 + 0x10a0)
                    float xmm1_3 = xmm0_7[0] - 100000f
                    int32_t xmm0_8 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0xaa)
                    
                    if (xmm0_8 f< xmm1_3)
                        goto label_4328a5
                    
                    float xmm3_3 = xmm0_7[3]
                    float xmm2_2 = xmm0_7[1]
                    
                    if (xmm3_3 < xmm2_2)
                        goto label_4328a5
                    
                    edi = var_40
                    
                    if (not(xmm5_1 < xmm1_3) && not(var_24 < xmm2_2) && not(xmm0_8 f< xmm5_1)
                            && not(xmm3_3 < var_24))
                        edi[1] = esi
                        result = sub_432440(result, 0xffffffff, edi, arg3, esi.b)
                else if (esi != 7)
                    edi = var_40
                else
                    if (edi_2 u>= data_63e5ac || result != ecx_3)
                        goto label_4328bb
                    
                    result = result_1
                    float xmm1_4[0x4] = *(result + edx_2 + 0x10a0)
                    int128_t var_20_5 = *(result + edx_2 + 0x10a0)
                    float xmm0_12 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0xaa) + 100000f
                    
                    if (xmm0_12 f< xmm1_4)
                        goto label_4328a5
                    
                    float xmm3_4 = xmm1_4[3]
                    float xmm2_4 = xmm1_4[1]
                    
                    if (xmm3_4 < xmm2_4)
                        goto label_4328a5
                    
                    if (xmm5_1 f< xmm1_4 || var_24 < xmm2_4 || xmm0_12 < xmm5_1)
                        edi = var_40
                    else
                        edi = var_40
                        
                        if (not(xmm3_4 < var_24))
                            result = sub_432440(result, esi, edi, arg3, 0)
            else
                *edi = 0
        
        esi += 1
        
        if (esi s>= 8)
            break
    
    return result
}
