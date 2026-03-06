// 函数名称: sub_4da320
// 虚拟地址: 0x4da320
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4da320(uint32_t arg1, char* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: char* var_18 = arg2
    char* var_18 = arg2
    char const* const var_3c
    int32_t var_38
    char const* const var_34
    char* ecx
    
    if (arg3 != 0)
        uint32_t ecx_1 = zx.d(arg3.w)
        int32_t ebx_1
        
        if (ecx_1 u< data_6c9ba0)
            ebx_1 = data_6c9b9c
            arg1 = ecx_1 * 3
        
        if (ecx_1 u>= data_6c9ba0 || *(ebx_1 + (arg1 << 3) + 0x14) != arg3)
            var_34 = "DataArray<struct Spine>::DataArrayGet"
            var_38 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_3c = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            uint32_t eax = ecx_1 * 3
            int32_t esi_1 = 0
            void* eax_1 = *(ebx_1 + (eax << 3) + 4)
            
            if (*(eax_1 + 0x10) s<= 0)
            label_4da3d2:
                eax_1.b = 0
                return eax_1
            
            int32_t* edi_1 = *(eax_1 + 0x18)
            
            while (true)
                int32_t* ebx_2 = *edi_1
                char* ecx_2 = arg2
                char* eax_3 = *(*ebx_2 + 4)
                
                while (true)
                    arg2.b = *eax_3
                    char temp0_1 = *ecx_2
                    bool c_1 = arg2.b u< temp0_1
                    
                    if (arg2.b == temp0_1)
                        if (arg2.b == 0)
                            arg1 = 0
                            break
                        
                        arg2.b = eax_3[1]
                        char temp1_1 = ecx_2[1]
                        c_1 = arg2.b u< temp1_1
                        
                        if (arg2.b == temp1_1)
                            eax_3 = &eax_3[2]
                            ecx_2 = &ecx_2[2]
                            
                            if (arg2.b != 0)
                                continue
                            
                            arg1 = 0
                            break
                    
                    arg1 = sbb.d(eax_3, eax_3, c_1) | 1
                    break
                
                if (arg1 == 0)
                    arg4[0xe] = esi_1
                    void* ecx_4 = ebx_2[7]
                    
                    if (*(ecx_4 + 4) != 0)
                        var_34 = "SpineGetSlotInfoByName"
                        var_38 = 0x32b
                        var_3c = "d:\ax\trunk\ax2017\engine\spine.cpp"
                        ecx = "Halt"
                        break
                    
                    int128_t* eax_5 = ebx_2[6]
                    int128_t xmm1 = zx.o(0)
                    
                    if (eax_5 != 0)
                        xmm1 = *eax_5
                    
                    void* eax_7 = *(ebx_1 + (eax << 3) + 4)
                    float xmm0_2 = ebx_2[2] f* *(eax_7 + 0x38) f* *(ecx_4 + 0x34)
                    float var_14 = ebx_2[3] f* *(eax_7 + 0x3c) f* *(ecx_4 + 0x38)
                    float var_10 = ebx_2[4] f* *(eax_7 + 0x40) f* *(ecx_4 + 0x3c)
                    float xmm0_11 = ebx_2[5] f* *(eax_7 + 0x44) f* *(ecx_4 + 0x40)
                    *(arg4 + 0x28) = xmm1
                    float var_c = xmm0_11
                    *(arg4 + 0x18) = xmm0_2.o
                    void* eax_8 = ebx_2[1]
                    float xmm0_13 = *(eax_8 + 0x50)
                    float xmm1_1 = *(eax_8 + 0x5c)
                    int32_t mxcsr
                    int16_t x87control
                    int16_t x87control_1
                    double xmm0_17
                    x87control_1, xmm0_17 = __libm_sse2_sqrt_precise(mxcsr, x87control, 
                        _mm_cvtps_pd(xmm0_13 * xmm0_13 + xmm1_1 * xmm1_1))
                    arg4[4] = fconvert.s(xmm0_17)
                    void* eax_9 = ebx_2[1]
                    float xmm0_19 = *(eax_9 + 0x54)
                    float xmm1_3 = *(eax_9 + 0x60)
                    arg4[5] = fconvert.s(__libm_sse2_sqrt_precise(mxcsr, x87control_1, 
                        _mm_cvtps_pd(xmm0_19 * xmm0_19 + xmm1_3 * xmm1_3)))
                    void* eax_10 = ebx_2[1]
                    float var_18_1
                    var_18_1.q = _mm_cvtps_pd(*(eax_10 + 0x5c))
                    var_18_1.q = _mm_cvtps_pd(*(eax_10 + 0x50))
                    sub_5984f0()
                    TEB* fsbase
                    void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
                    var_18_1.q = fconvert.d(fconvert.t(var_18_1.q))
                    float xmm0_31 = _mm_cvtpd_ps(zx.o(var_18_1.q)) * 57.2957764f
                    
                    if (data_1511ab0 s> *(*ThreadLocalStoragePointer + 4))
                        __Init_thread_header(&data_1511ab0)
                        
                        if (data_1511ab0 == 0xffffffff)
                            data_1511ab4 = 0x3c8efa35
                            __Init_thread_footer(&data_1511ab0)
                    
                    float xmm0_32 = xmm0_31 f* data_1511ab4
                    int32_t xmm0_33 = sub_41f120(xmm0_32)
                    arg4[3] = sub_41f100(xmm0_32)
                    arg4[2] = xmm0_33
                    *arg4 = 0
                    arg4[1] = 0
                    void* eax_12 = ebx_2[1]
                    float xmm0_37 = *arg4 f+ *(eax_12 + 0x58)
                    float xmm1_6 = *(eax_12 + 0x64)
                    eax_12.b = 1
                    *arg4 = xmm0_37
                    arg4[1] = arg4[1] f+ xmm1_6
                    return eax_12
                
                esi_1 += 1
                edi_1 = &edi_1[1]
                arg2 = var_18
                
                if (esi_1 s>= *(*(ebx_1 + (eax << 3) + 4) + 0x10))
                    goto label_4da3d2
    else
        var_34 = "DataArray<struct Spine>::DataArrayGet"
        var_38 = 0x6c
        ecx = "id != DATAID_NULL"
        var_3c = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(arg1, &data_5b2591, ecx, var_3c, var_38, var_34)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
