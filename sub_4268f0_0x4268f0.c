// 函数名称: sub_4268f0
// 虚拟地址: 0x4268f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4268f0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    float xmm0_1 = data_12baa7c f+ data_620d84
    data_126cd38 = 0
    data_12baa78 = 1
    data_12baa7c = xmm0_1
    HWND eax_2 = GetFocus()
    int32_t var_1c
    
    if (data_1150b8c == eax_2)
        void* ecx_1 = data_114e840
        void* eax_7 = data_aca1f0
        
        if (data_114ec84 s<= 0 && ((*(ecx_1 + 0xc) & 1) == 0 || *(eax_7 + 0x18) == 0))
            data_12baa80.b = 0
        
        if ((*(ecx_1 + 0xc) & 2) == 0 || *(eax_7 + 0x18) == 0)
            data_12baa80:1.b = 0
    else
        int32_t xmm1_2[0x4] = __paddd_xmmdq_memdq(data_60c870, data_60c890)
        data_12baa80 = 0
        int32_t xmm0_3 = _mm_bsrli_si128(xmm1_2, 4)
        int32_t var_20_1 = 0
        var_1c = 1
        *(xmm1_2 + &data_12baa80) = 0
        int32_t xmm0_5 = _mm_bsrli_si128(xmm1_2, 8)
        int32_t xmm1_3 = _mm_bsrli_si128(xmm1_2, 0xc)
        *(xmm0_3 + &data_12baa80) = 0
        *(xmm0_5 + &data_12baa80) = 0
        *(xmm1_3 + &data_12baa80) = 0
    
    float xmm1_5 = data_12baa7c * 1000f
    float xmm1_6
    
    if (0 f<= xmm1_5)
        xmm1_6 = xmm1_5 + 0.5f
    else
        xmm1_6 = xmm1_5 - 0.5f
    
    int32_t result = int.d(xmm1_6)
    int32_t edi = data_12baa78
    int32_t esi = 0
    int32_t result_1 = result
    
    if (edi != 0)
        int32_t* ebx_1 = &data_126cd38
        int32_t* var_334_1 = &data_126cd38
        
        do
            struct InputHitResult::HitResult::VTable* var_39c
            struct InputHitResult::HitResult::VTable** eax_8 = sub_420430(&var_39c, ebx_1)
            struct InputHitResult::HitResult::VTable* const var_370 =
                &HitResult::`vftable'{for `InputHitResult'}
            int32_t var_36c_1 = eax_8[1]
            int32_t var_368_1 = eax_8[2]
            struct InputHitResult::UI2HitResult::VTable* const var_364_1 =
                &UI2HitResult::`vftable'{for `InputHitResult'}
            int32_t var_360_1 = eax_8[4]
            int32_t var_35c_1 = eax_8[5]
            int32_t var_358_1 = eax_8[6]
            int32_t var_354_1 = eax_8[7]
            int64_t var_350_1 = *(eax_8 + 0x20)
            int32_t var_348_1 = eax_8[0xa]
            void var_328
            int32_t eax_12 = sub_4c45f0(ebx_1, &var_328)
            int32_t var_338_1 = 0
            char const* const var_3b4_4
            int32_t var_3b0_5
            char const* const var_3ac_6
            void* var_33c
            void* eax_13
            char* ecx_15
            
            if (eax_12 s> 0)
                void var_320
                void* ebx_2 = &var_320
                var_33c = &var_320
                int32_t eax_20
                
                do
                    void* ecx_8 = *(ebx_2 - 8)
                    eax_13 = nullptr
                    int16_t var_330_1 = 0
                    
                    if (ecx_8 s>= 0x23)
                        if (ecx_8 - 0x23 s>= 7)
                            var_3ac_6 = "ButtonSourceIsDown"
                            var_3b0_5 = 0x164
                            var_3b4_4 = "d:\ax\trunk\ax2017\engine\controller.cpp"
                            ecx_15 = "idx < NUM_BUTTONSOURCES_HANDED"
                            goto label_426d36
                        
                        if (ecx_8 - 0x23 s< 0)
                            var_3ac_6 = "ButtonSourceIsDown"
                            var_3b0_5 = 0x165
                            var_3b4_4 = "d:\ax\trunk\ax2017\engine\controller.cpp"
                            ecx_15 = "idx >= 0"
                            goto label_426d36
                        
                        if (*(ebx_2 - 4) != 0)
                            ebx_2.b = *(ecx_8 + 0x12baaaa)
                            var_330_1.b = ebx_2.b
                        else
                            ebx_2.b = *(ecx_8 + 0x12baaa3)
                            var_330_1.b = ebx_2.b
                        
                        goto label_426b64
                    
                    if (ecx_8 s< 0)
                        var_3ac_6 = "ButtonSourceIsDown"
                        var_3b0_5 = 0x172
                        var_3b4_4 = "d:\ax\trunk\ax2017\engine\controller.cpp"
                        ecx_15 = "source >= 0"
                    label_426d36:
                        sub_489550(eax_13, &data_5b2591, ecx_15, var_3b4_4, var_3b0_5, var_3ac_6)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    ebx_2.b = *(ecx_8 + &data_12baa80)
                    var_330_1.b = ebx_2.b
                    
                    if (ecx_8 == 0 || ecx_8 == 1)
                        ecx_8.b = *(ecx_8 + &data_12baaa3)
                        char edx_3 = var_330_1:1.b
                        
                        if (ecx_8.b != 0)
                            edx_3 = ecx_8.b
                        
                        var_330_1:1.b = edx_3
                    
                label_426b64:
                    void* ebx_3 = var_33c
                    uint32_t eax_18 = var_330_1.d u>> 8
                    sub_4d02d0(eax_18, ebx_2.b, *ebx_3, eax_18.b, result_1, &var_370, 
                        &var_334_1[0x26e5], &var_334_1[0x26e7])
                    ebx_2 = ebx_3 + 0xc
                    eax_20 = var_338_1 + 1
                    var_33c = ebx_2
                    var_338_1 = eax_20
                while (eax_20 s< eax_12)
                ebx_1 = var_334_1
            
            int32_t xmm0_8[0x4] = __paddd_xmmdq_memdq(data_60c870, data_60c880)
            int32_t var_28 = 7
            int32_t var_24_1 = 0
            int32_t var_20_2 = 1
            var_1c.o = xmm0_8
            int32_t var_c_1 = 2
            char var_329 = 0
            result = sub_420f90(ebx_1, &var_370, &var_329)
            
            if (var_329 == 0)
                int32_t* i = &var_28
                
                do
                    int32_t eax_21 = *i
                    var_33c = nullptr
                    
                    if (sub_4c4fb0(eax_21, eax_21, var_334_1, &var_33c) != 0)
                        eax_13 = var_33c
                        
                        if (eax_13 != 0)
                            ebx_1 = var_334_1
                            sub_420da0(ebx_1, eax_13, eax_21)
                            goto label_426c89
                        
                        var_3ac_6 = "ControllersUpdate"
                        var_3b0_5 = 0x61
                        var_3b4_4 = "d:\ax\trunk\ax2017\engine\controller.h"
                        ecx_15 = "lastOver"
                        goto label_426d36
                    
                    i = &i[1]
                while (i != &var_8)
                
                ebx_1 = var_334_1
            
        label_426c89:
            bool cond:1_1 = *ebx_1 != 0
            ebx_1[1] = result
            
            if (not(cond:1_1))
                int32_t ecx_12 = 1
                
                if (result == 2)
                    ecx_12 = 2
                
                result = sub_489d20(ecx_12)
            
            esi += 1
            ebx_1 = &ebx_1[0x26ea]
            var_334_1 = ebx_1
        while (esi != edi)
    
    int32_t ecx_14 = var_8 ^ &__saved_ebp
    data_12baa82 = 0
    data_12baaa3 = 0
    @__security_check_cookie@4(ecx_14)
    return result
}
