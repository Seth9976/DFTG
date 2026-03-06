// 函数名称: sub_4dee70
// 虚拟地址: 0x4dee70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4dee70()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a077c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t __saved_ebp
    (*(*data_114ec78 + 0x94))(__security_cookie ^ &__saved_ebp)
    void* eax_4 = data_114ec70
    *(eax_4 + 0x24c) = 0
    *(eax_4 + 0xf0) = 1
    *(eax_4 + 0xf4) = 1
    sub_4dedb0(1)
    void* eax_5 = data_114e818
    
    if (eax_5 == 0)
        sub_489550(eax_5, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, 
            "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    float var_40
    
    if ((*(eax_5 + 0x1c) & 0x200) == 0)
        if (data_1150c9e == 0 || data_1150e20 == 0 || data_1150e5c == 0)
            void* eax_17 = data_aca1ec
            
            if (*(eax_17 + 0x2a) == 0)
                if (*(eax_17 + 0x27) != 0)
                    void* eax_19 = data_114ec70
                    *(eax_19 + 4) = *(eax_19 + 0x34)
                    *(eax_19 + 0x14) = *(eax_19 + 0x44)
                    *(eax_19 + 0x24) = *(eax_19 + 0x54)
                
                (*(*data_114ec78 + 0x8c))(data_aca230)
                sub_492900()
                sub_495f10(2)
            else
                sub_4f5710(1)
                int32_t* ecx_7 = data_aca1ec
                data_114e7ec = 2
                (*(*ecx_7 + 0x30))()
        else
            (*(*data_114ec78 + 0x8c))(data_aca230)
            float xmm4_4 = (data_1150e18 f- data_1150e08) * 0.5f f+ data_1150e08
            float xmm5_4 = (data_1150e10 f- data_1150e00) * 0.5f f+ data_1150e00
            float xmm6_4 = (data_1150e14 f- data_1150e04) * 0.5f f+ data_1150e04
            float xmm7_4 = (data_1150e0c f- data_1150dfc) * 0.5f f+ data_1150dfc
            float xmm0_14 = (xmm4_4 + xmm5_4) * 0.5f
            float xmm2_3 = (xmm6_4 + xmm7_4) * 0.5f
            float xmm5_7 = (xmm5_4 - xmm0_14) * 0.800000012f + xmm0_14
            float xmm4_7 = (xmm4_4 - xmm0_14) * 0.800000012f + xmm0_14
            float xmm2_4[0x4] = data_aca200
            float var_48 = (xmm7_4 - xmm2_3) * 0.800000012f + xmm2_3
            var_40 = (xmm6_4 - xmm2_3) * 0.800000012f + xmm2_3
            float xmm1_5 = (xmm5_7 + xmm4_7) * 0.5f
            int64_t var_38_1 = _mm_unpacklo_ps(xmm2_4, data_aca204)
            float var_44_1 = (xmm5_7 - xmm1_5) * 0.600000024f + xmm1_5
            float var_3c_1 = (xmm4_7 - xmm1_5) * 0.600000024f + xmm1_5
            var_48.o = var_48.o
            sub_4924f0(&var_48)
            sub_495f10(2)
        
        sub_4dec60()
    else
        (*(*data_114ec78 + 0x8c))(0xff000000)
        
        if (data_15166c8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_15166c8)
            
            if (data_15166c8 == 0xffffffff)
                int32_t var_14_1 = 0
                data_15166cc = sub_4d0b50("sys/sprite_opaque.material", 5)
                int32_t var_14_2 = 0xffffffff
                __Init_thread_footer(&data_15166c8)
        
        int32_t eax_10 = data_1150db4
        
        if (eax_10 != 3 && eax_10 == 5)
            var_40.o = data_60cb50
            
            if (data_114ec74 == 1)
                var_40.o = data_60c7e0
            
            int32_t eax_11 = data_1150ddc
            int32_t* ecx_3 = *((eax_11 << 2) + &data_1150dc4)
            float var_30
            
            if (ecx_3 != 0)
                void* eax_12 = data_aca1ec
                int32_t* var_50_1 = data_15166cc
                var_30 = 0f
                int32_t var_2c_1 = 0
                float var_28_1 = _mm_cvtepi32_ps(zx.o(*(eax_12 + 0x14))) * 0.5f
                int32_t var_24_1 = _mm_cvtepi32_ps(zx.o(*(eax_12 + 0x18)))
                sub_4c0210(&var_40, &var_30, ecx_3, &var_40, &data_63c284, var_50_1)
                eax_11 = data_1150ddc
            
            int32_t* ecx_4 = *((eax_11 << 2) + &data_1150dc8)
            
            if (ecx_4 != 0)
                void* eax_14 = data_aca1ec
                int32_t* var_50_2 = data_15166cc
                int32_t var_2c_2 = 0
                float xmm1_2 = _mm_cvtepi32_ps(zx.o(*(eax_14 + 0x14)))
                float var_28_2 = xmm1_2
                var_30 = xmm1_2 * 0.5f
                int32_t var_24_2 = _mm_cvtepi32_ps(zx.o(*(eax_14 + 0x18)))
                sub_4c0210(&var_40, &var_30, ecx_4, &var_40, &data_63c284, var_50_2)
    sub_4f5710(0)
    (*(*data_114ec78 + 0x98))()
    int32_t result = (*(*data_114ec78 + 0x9c))(1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
