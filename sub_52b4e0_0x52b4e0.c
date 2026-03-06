// 函数名称: sub_52b4e0
// 虚拟地址: 0x52b4e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_52b4e0(char** arg1, int32_t arg2, float arg3 @ xmm2)
{
    // 第一条实际指令: int32_t ecx = data_1151ae0
    int32_t ecx = data_1151ae0
    int32_t eax = arg2 << 2
    int32_t result_1
    float ecx_1
    int16_t edx
    
    if (ecx == 0)
        int32_t var_20_1 = eax
        result_1, ecx_1, edx = _malloc()
    else
        result_1, edx, ecx_1 =
            ecx(eax, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x264)
    
    int32_t result = result_1
    arg3 - 1f
    int32_t var_8_1 = 0
    result_1:1.b =
        (arg3 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg3, 1f) ? 1 : 0) << 2 | (arg3 < 1f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    int32_t ebx
    
    if (p_1)
        if (arg2 s> 0)
            int32_t eax_21
            
            do
                char* eax_12 = *arg1
                ecx_1.b = *eax_12
                *arg1 = &eax_12[1]
                edx:1.b = eax_12[1]
                *arg1 = &eax_12[2]
                edx.b = eax_12[2]
                *arg1 = &eax_12[3]
                ebx.b = eax_12[3]
                *arg1 = &eax_12[4]
                *(result + (var_8_1 << 2)) = (
                    ((zx.d(ecx_1.b) << 8 | zx.d(edx:1.b)) << 8 | zx.d(edx.b)) << 8 | zx.d(ebx.b)) * arg3
                eax_21 = var_8_1 + 1
                var_8_1 = eax_21
            while (eax_21 s< arg2)
    else if (arg2 s> 0)
        int32_t eax_10
        
        do
            char* eax_1 = *arg1
            ecx_1.b = *eax_1
            *arg1 = &eax_1[1]
            edx:1.b = eax_1[1]
            *arg1 = &eax_1[2]
            edx.b = eax_1[2]
            *arg1 = &eax_1[3]
            ebx.b = eax_1[3]
            *arg1 = &eax_1[4]
            *(result + (var_8_1 << 2)) =
                ((zx.d(ecx_1.b) << 8 | zx.d(edx:1.b)) << 8 | zx.d(edx.b)) << 8 | zx.d(ebx.b)
            eax_10 = var_8_1 + 1
            var_8_1 = eax_10
        while (eax_10 s< arg2)
    return result
}
