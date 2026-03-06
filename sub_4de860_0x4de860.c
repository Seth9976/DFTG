// 函数名称: sub_4de860
// 虚拟地址: 0x4de860
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_4de860(long double arg1 @ st0)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a074c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_15166c0 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_15166c0)
        
        if (data_15166c0 == 0xffffffff)
            int32_t var_8_1 = 0
            data_15166c4 = sub_4d0b50("sys/DebugFont.font", 0x12)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_15166c0)
    
    void* eax_6
    
    if (*(data_aca1ec + 0x27) != 0)
        if ((*(sub_48df20() + 0x1c) & 0x200) != 0 || data_1150c9e != 0)
            eax_6.b = 1
        else
            eax_6.b = 0
    else
        eax_6.b = 0
    
    int32_t ecx_1 = 0x7d0
    char* const result_1 = &data_5b2591
    
    if (eax_6.b == 0)
        ecx_1 = 0x3e8
    
    int32_t var_8_3 = 1
    void* esi = data_114ec70
    int32_t var_48 = divs.dp.d(sx.q(*(esi + 0x68)), ecx_1)
    int32_t var_4c = divs.dp.d(sx.q(*(esi + 0x6c)), ecx_1)
    int32_t var_50 = divs.dp.d(sx.q(*(esi + 0x74)), zx.d(eax_6.b) + 1)
    int32_t var_54 = divs.dp.d(sx.q(*(esi + 0x70)), zx.d(eax_6.b) + 1)
    int32_t var_58 = divs.dp.d(sx.q(*(esi + 0x64)), zx.d(eax_6.b) + 1)
    var_8_3.b = 2
    char* const ebx = &data_5b2591
    char* var_1c
    char* eax_23 = *sub_48a9d0(&var_1c, "draw calls: %d, vb: %d, vao: %d, verts: %dK, tris: %dK\r")
    char* ecx_2 = &data_5b2591
    
    if (eax_23 != 0)
        ecx_2 = eax_23
    
    sub_48a670(&result_1, ecx_2)
    var_8_3.b = 3
    
    if (data_aca1f4 != 0)
        char* eax_24 = var_1c
        
        if (eax_24 != 0 && *eax_24 != 0)
            char* eax_25 = sub_48a080(&var_1c)
            int32_t temp2_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_25, *(eax_25 + 0xc) + 0x10)
    
    var_8_3.b = 1
    int32_t var_48_2 = divs.dp.d(sx.q(*(esi + 0x90)), zx.d(eax_6.b) + 1)
    int32_t var_4c_1 = divs.dp.d(sx.q(*(esi + 0x8c)), zx.d(eax_6.b) + 1)
    int32_t var_50_1 = divs.dp.d(sx.q(*(esi + 0x88)), zx.d(eax_6.b) + 1)
    var_8_3.b = 4
    char* ecx_6 = &data_5b2591
    char* eax_36 = *sub_48a9d0(&var_1c, "sprite: draws %d, draws calls %d, texture swaps %d\r")
    
    if (eax_36 != 0)
        ecx_6 = eax_36
    
    sub_48a670(&result_1, ecx_6)
    var_8_3.b = 5
    
    if (data_aca1f4 != 0)
        char* eax_37 = var_1c
        
        if (eax_37 != 0 && *eax_37 != 0)
            char* eax_38 = sub_48a080(&var_1c)
            int32_t temp3_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(eax_38, *(eax_38 + 0xc) + 0x10)
    
    var_8_3.b = 1
    int32_t var_48_4 = divs.dp.d(sx.q(*(esi + 0x7c)), zx.d(eax_6.b) + 1)
    int32_t var_4c_2 = divs.dp.d(sx.q(*(esi + 0x78)), zx.d(eax_6.b) + 1)
    var_8_3.b = 6
    char* ecx_10 = &data_5b2591
    char* eax_46 = *sub_48a9d0(&var_1c, "draw3d: meshes %d (draws calls %d)\r")
    
    if (eax_46 != 0)
        ecx_10 = eax_46
    
    sub_48a670(&result_1, ecx_10)
    var_8_3.b = 7
    
    if (data_aca1f4 != 0)
        char* eax_47 = var_1c
        
        if (eax_47 != 0 && *eax_47 != 0)
            char* eax_48 = sub_48a080(&var_1c)
            int32_t temp4_1 = *(eax_48 + 4)
            *(eax_48 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_4984f0(eax_48, *(eax_48 + 0xc) + 0x10)
    
    var_8_3.b = 1
    int32_t var_48_6 = divs.dp.d(sx.q(*(esi + 0x84)), zx.d(eax_6.b) + 1)
    int32_t var_4c_3 = divs.dp.d(sx.q(*(esi + 0x80)), zx.d(eax_6.b) + 1)
    var_8_3.b = 8
    char* ecx_14 = &data_5b2591
    char* var_18
    char* eax_56 = *sub_48a9d0(&var_18, "draw3d: quads %d (draws calls %d)\r")
    
    if (eax_56 != 0)
        ecx_14 = eax_56
    
    char** ecx_16 = sub_48a670(&result_1, ecx_14)
    var_8_3.b = 9
    
    if (data_aca1f4 != 0)
        char* eax_57 = var_18
        
        if (eax_57 != 0 && *eax_57 != 0)
            ecx_16 = &var_18
            char* eax_58 = sub_48a080(ecx_16)
            int32_t temp5_1 = *(eax_58 + 4)
            *(eax_58 + 4) -= 1
            
            if (temp5_1 == 1)
                ecx_16 = sub_4984f0(eax_58, *(eax_58 + 0xc) + 0x10)
                var_18 = &data_5b2591
    
    var_8_3.b = 1
    char* eax_59 = data_aca1ec
    
    if (eax_59[0x27] != 0)
        (*(*data_114ec78 + 0xac))(0)
        float var_20_1 = fconvert.s(arg1)
        (*(*data_114ec78 + 0xac))(1)
        long double x87_r1
        var_1c = fconvert.s(x87_r1)
        var_4c_3.q = _mm_cvtps_pd(var_1c)
        int32_t* var_54_2
        var_54_2.q = _mm_cvtps_pd(var_20_1)
        var_8_3.b = 0xa
        char* eax_65 = *sub_48a9d0(&var_1c, "gpu eyes %0.2f ms, vr end %0.2f ms\r")
        
        if (eax_65 != 0)
            ebx = eax_65
        
        eax_59, ecx_16 = sub_48a670(&result_1, ebx)
        var_8_3.b = 0xb
        
        if (data_aca1f4 != 0)
            eax_59 = var_1c
            
            if (eax_59 != 0 && *eax_59 != 0)
                ecx_16 = &var_1c
                eax_59 = sub_48a080(ecx_16)
                int32_t temp7_1 = *(eax_59 + 4)
                *(eax_59 + 4) -= 1
                
                if (temp7_1 == 1)
                    eax_59, ecx_16 = sub_4984f0(eax_59, *(eax_59 + 0xc) + 0x10)
                    var_1c = &data_5b2591
        
        var_8_3.b = 1
    
    char** var_48_9 = ecx_16
    int32_t var_48_10 = 0x3f800000
    int128_t var_30 = data_60cc10
    char* result = sub_4eaa00(eax_59, &var_30, &result_1, data_15166c4, 0xffffffff, 0, 1)
    int32_t var_8_4 = 0xc
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp6_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp6_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
