// 函数名称: sub_4d9be0
// 虚拟地址: 0x4d9be0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4d9be0(int32_t arg1, void*** arg2)
{
    // 第一条实际指令: int32_t __saved_ebx_2
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = __ehhandler$?_Init@?$numpunct@_W@std@@IAEXABV_Locinfo@2@_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_c4 = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 == 0)
        char const* const var_c8_10 = "DataArray<struct Spine>::DataArrayGet"
        int32_t var_cc_2 = 0x6c
        char const* const var_d0_2 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        sub_489550(eax_3, &data_5b2591, "id != DATAID_NULL")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    uint32_t ecx = zx.d(arg1.w)
    
    if (ecx u< data_6c9ba0)
        int32_t edx = data_6c9b9c
        eax_3 = ecx * 3
        
        if (*(edx + (eax_3 << 3) + 0x14) == arg1)
            uint32_t result = ecx * 3
            uint32_t result_2 = *(edx + (result << 3) + 4)
            uint32_t result_1 = result
            uint32_t result_3 = result_2
            float xmm0 = *(result_2 + 0x44)
            xmm0 f- 0
            result:1.b = (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2
                | (xmm0 < 0f ? 1 : 0)
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (p_1)
                int32_t ecx_1 = 0
                int32_t var_6c_1 = 0
                
                if (*(result_2 + 0x10) s> 0)
                    result = result_2
                    
                    while (true)
                        int32_t* edx_1 = (*(result + 0x18))[ecx_1]
                        int32_t* var_7c_1 = edx_1
                        void* esi_1 = edx_1[7]
                        
                        if (esi_1 != 0)
                            if (arg2 != 0)
                                int32_t edi = 0
                                char* ecx_2 = *(*edx_1 + 4)
                                char* var_88_1 = ecx_2
                                
                                if (arg2[2] s> 0)
                                    void** esi_2 = *arg2
                                    
                                    while (true)
                                        void* eax_6 = *esi_2
                                        int32_t eax_8
                                        
                                        while (true)
                                            edx_1.b = *eax_6
                                            char temp0_1 = *ecx_2
                                            bool c_1 = edx_1.b u< temp0_1
                                            
                                            if (edx_1.b == temp0_1)
                                                if (edx_1.b == 0)
                                                    eax_8 = 0
                                                    break
                                                
                                                edx_1.b = *(eax_6 + 1)
                                                char temp1_1 = ecx_2[1]
                                                c_1 = edx_1.b u< temp1_1
                                                
                                                if (edx_1.b == temp1_1)
                                                    eax_6 += 2
                                                    ecx_2 = &ecx_2[2]
                                                    
                                                    if (edx_1.b != 0)
                                                        continue
                                                    
                                                    eax_8 = 0
                                                    break
                                            
                                            eax_8 = sbb.d(eax_6, eax_6, c_1) | 1
                                            break
                                        
                                        if (eax_8 == 0)
                                            goto label_4da20b
                                        
                                        edi += 1
                                        ecx_2 = var_88_1
                                        esi_2 = &esi_2[4]
                                        
                                        if (edi s>= arg2[2])
                                            edx_1 = var_7c_1
                                            break
                                
                                ecx_1 = var_6c_1
                                result_2 = result_3
                            
                            float xmm0_1 = edx_1[5]
                            xmm0_1 f- 0
                            void*** eax_5
                            eax_5:1.b = (xmm0_1 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2 | (xmm0_1 < 0f ? 1 : 0)
                            bool p_3 = unimplemented  {test ah, 0x44}
                            
                            if (p_3)
                                void* ecx_3 = edx_1[1]
                                
                                if (*(ecx_3 + 0x6c) != 0)
                                    if (*(esi_1 + 4) != 0)
                                        char const* const var_c8_12 = "SpineDraw"
                                        int32_t var_cc_4 = 0x2c3
                                        char const* const var_d0_4 =
                                            "d:\ax\trunk\ax2017\engine\spine.cpp"
                                        sub_489550(eax_5, &data_5b2591, "Halt")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    float xmm0_2 = *(esi_1 + 0x40)
                                    xmm0_2 f- 0
                                    eax_5:1.b = (xmm0_2 == 0f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
                                        | (xmm0_2 < 0f ? 1 : 0)
                                    bool p_5 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_5)
                                        float xmm4_1 = *(ecx_3 + 0x54)
                                        float xmm7_1 = *(ecx_3 + 0x50)
                                        float xmm6_1 = *(ecx_3 + 0x64)
                                        float xmm0_5 = *(ecx_3 + 0x5c)
                                        float xmm3_4 = xmm7_1 f* *(esi_1 + 0x78)
                                            + xmm4_1 f* *(esi_1 + 0x7c) f+ *(ecx_3 + 0x58)
                                        float xmm3_5 = *(ecx_3 + 0x60)
                                        float xmm1_3 = xmm0_5 f* *(esi_1 + 0x78)
                                            + xmm3_5 f* *(esi_1 + 0x7c) + xmm6_1
                                        float xmm5_2 =
                                            xmm7_1 f* *(esi_1 + 0x60) + xmm4_1 f* *(esi_1 + 0x64)
                                        float var_70_2 = xmm5_2
                                        float xmm0_14 = xmm5_2 f+ *(ecx_3 + 0x58)
                                        float xmm1_6 = xmm0_5 f* *(esi_1 + 0x60)
                                            + xmm3_5 f* *(esi_1 + 0x64) + xmm6_1
                                        float xmm5_4 =
                                            xmm7_1 f* *(esi_1 + 0x68) + xmm4_1 f* *(esi_1 + 0x6c)
                                        float var_74_2 = xmm5_4
                                        float xmm0_24 = xmm5_4 f+ *(ecx_3 + 0x58)
                                        float xmm7_4 = xmm7_1 f* *(esi_1 + 0x70)
                                            + xmm4_1 f* *(esi_1 + 0x74) f+ *(ecx_3 + 0x58)
                                        float var_34_1 = xmm7_4
                                        float xmm1_8 =
                                            xmm0_5 f* *(esi_1 + 0x68) + xmm3_5 f* *(esi_1 + 0x6c)
                                        float xmm2_3 =
                                            xmm0_5 f* *(esi_1 + 0x70) + xmm3_5 f* *(esi_1 + 0x74)
                                        float var_44 = xmm3_4
                                        float var_40_1 = xmm1_3
                                        float xmm1_9 = xmm1_8 + xmm6_1
                                        float var_3c_1 = xmm0_14
                                        float xmm2_4 = xmm2_3 + xmm6_1
                                        float var_38_1 = xmm1_6
                                        bool cond:0_1 = edx_1[6] == 0
                                        float var_2c_1 = xmm0_24
                                        float var_28_1 = xmm1_9
                                        int32_t var_84_1 = 0
                                        int32_t ecx_4 = 0
                                        int128_t var_64 = *(esi_1 + 0x80)
                                        int32_t var_54_1 = *(esi_1 + 0x98)
                                        int32_t var_50_1 = *(esi_1 + 0x9c)
                                        int32_t var_4c_1 = *(esi_1 + 0x90)
                                        float var_30_1 = xmm2_4
                                        int32_t var_48_1 = *(esi_1 + 0x94)
                                        float var_d0
                                        int32_t* var_cc
                                        int32_t* var_c8
                                        
                                        if (not(cond:0_1))
                                            ecx_4 = sub_497d80((*edx_1[6]).d, var_d0, var_cc, var_c8)
                                        
                                        float var_b0_1 =
                                            *(result_2 + 0x3c) f* edx_1[3] f* *(esi_1 + 0x38)
                                        float var_ac_1 =
                                            *(result_2 + 0x40) f* edx_1[4] f* *(esi_1 + 0x3c)
                                        float var_a8_1 =
                                            *(result_2 + 0x44) f* edx_1[5] f* *(esi_1 + 0x40)
                                        int32_t var_a4 = sub_497d80(
                                            edx_1[2] f* *(result_2 + 0x38) f* *(esi_1 + 0x34), var_d0, 
                                            var_cc, var_c8)
                                        int32_t var_a0_1 = ecx_4
                                        int32_t eax_12 = *(*edx_1 + 0x24)
                                        void* edi_1 = *fsbase->ThreadLocalStoragePointer
                                        
                                        if (data_1516494 s> *(edi_1 + 4))
                                            int32_t* var_c8_1 = &data_1516494
                                            __Init_thread_header(&data_1516494)
                                            
                                            if (data_1516494 == 0xffffffff)
                                                int32_t var_14_1 = 0
                                                int32_t* var_c8_2 = &data_1516494
                                                data_1516498 = sub_4d0b50("sys/SpineTint.material", 5)
                                                int32_t var_14_2 = 0xffffffff
                                                __Init_thread_footer(&data_1516494)
                                        
                                        if (data_151649c s> *(edi_1 + 4))
                                            int32_t* var_c8_3 = &data_151649c
                                            __Init_thread_header(&data_151649c)
                                            
                                            if (data_151649c == 0xffffffff)
                                                int32_t var_14_3 = 1
                                                int32_t* var_c8_4 = &data_151649c
                                                data_15164a0 =
                                                    sub_4d0b50("sys/SpineTintAdditive.material", 5)
                                                int32_t var_14_4 = 0xffffffff
                                                __Init_thread_footer(&data_151649c)
                                        
                                        if (data_15164a4 s> *(edi_1 + 4))
                                            int32_t* var_c8_5 = &data_15164a4
                                            __Init_thread_header(&data_15164a4)
                                            
                                            if (data_15164a4 == 0xffffffff)
                                                int32_t var_14_5 = 2
                                                int32_t* var_c8_6 = &data_15164a4
                                                data_15164a8 =
                                                    sub_4d0b50("sys/SpineTintMultiply.material", 5)
                                                int32_t var_14_6 = 0xffffffff
                                                __Init_thread_footer(&data_15164a4)
                                        
                                        if (data_15164ac s> *(edi_1 + 4))
                                            int32_t* var_c8_7 = &data_15164ac
                                            __Init_thread_header(&data_15164ac)
                                            
                                            if (data_15164ac == 0xffffffff)
                                                int32_t var_14_7 = 3
                                                int32_t* var_c8_8 = &data_15164ac
                                                data_15164b0 =
                                                    sub_4d0b50("sys/SpineTintScreen.material", 5)
                                                int32_t var_14_8 = 0xffffffff
                                                __Init_thread_footer(&data_15164ac)
                                        
                                        if (eax_12 u> 3)
                                            char const* const var_c8_11 = "SpineMaterial"
                                            int32_t var_cc_3 = 0x25a
                                            char const* const var_d0_3 =
                                                "d:\ax\trunk\ax2017\engine\spine.cpp"
                                            sub_489550(eax_12, &data_5b2591, "Halt")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_489700()
                                            noreturn
                                        
                                        int32_t* edi_2
                                        
                                        switch (eax_12)
                                            case 0
                                                edi_2 = data_1516498
                                            case 1
                                                edi_2 = data_15164a0
                                            case 2
                                                edi_2 = data_15164a8
                                            case 3
                                                edi_2 = data_15164b0
                                        
                                        int32_t* ecx_8
                                        
                                        if (*(sub_4d92e0(*(edx + (result_1 << 3))) + 0x20) == 0)
                                            ecx_8 = *(esi_1 + 0x44)
                                        else
                                            ecx_8 = *(*(*(esi_1 + 0x44) + 0x4c) + 0x1c)
                                        
                                        void* eax_27 = data_114e814
                                        var_c8 = edi_2
                                        float xmm1_10 = *(eax_27 + 0x20)
                                        var_cc = ecx_8
                                        var_d0 = 0f
                                        var_44 = xmm3_4 + xmm1_10
                                        float xmm0_56 = *(eax_27 + 0x24)
                                        float var_40_2 = xmm1_3 + xmm0_56
                                        float var_3c_2 = xmm0_14 + xmm1_10
                                        float var_38_2 = xmm1_6 + xmm0_56
                                        float var_34_2 = xmm7_4 + xmm1_10
                                        float var_30_2 = xmm2_4 + xmm0_56
                                        float var_2c_2 = xmm0_24 + xmm1_10
                                        float var_28_2 = xmm1_9 + xmm0_56
                                        sub_4bef10(&var_a4, &var_64, &var_44, &var_a4, 0, var_cc, 
                                            var_c8)
                                
                            label_4da20b:
                                ecx_1 = var_6c_1
                        
                        ecx_1 += 1
                        var_6c_1 = ecx_1
                        result_2 = *(edx + (result_1 << 3) + 4)
                        result = result_2
                        result_3 = result_2
                        
                        if (ecx_1 s>= *(result_2 + 0x10))
                            break
            
            fsbase->NtTib.ExceptionList = ExceptionList
            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
            return result
    
    char const* const var_c8_9 = "DataArray<struct Spine>::DataArrayGet"
    int32_t var_cc_1 = 0x6d
    char const* const var_d0_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    sub_489550(eax_3, &data_5b2591, "DataArrayTryToGet(id) != NULL")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
