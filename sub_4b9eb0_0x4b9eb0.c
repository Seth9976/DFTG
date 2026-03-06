// 函数名称: sub_4b9eb0
// 虚拟地址: 0x4b9eb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4b9eb0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f8a9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_38 = 0
    void* eax_20
    
    if (*(arg1 + 0xf58) == 0)
    label_4ba2e8:
        eax_20 = *(arg1 + 0x1404)
        
        if (eax_20 != 0)
            eax_20 = eax_20(arg2, eax_2)
        else if (*(arg1 + 0x112c) != 0)
            int32_t eax_21 = sub_4b9eb0(eax_2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_21
    else
        char* const var_2c
        sub_48a2c0(&var_2c, "btn_scroll_up")
        char* eax_3 = var_2c
        char* const ecx_1 = &data_5b2591
        char* edx = arg2[1]
        
        if (eax_3 != 0)
            ecx_1 = eax_3
        
        int32_t esi_1
        
        while (true)
            eax_3.b = *edx
            char temp0_1 = *ecx_1
            bool c_1 = eax_3.b u< temp0_1
            bool z_1 = eax_3.b == temp0_1
            char var_21_1 = eax_3.b
            eax_3 = var_2c
            
            if (z_1)
                if (var_21_1 == 0)
                    esi_1 = 0
                    break
                
                eax_3.b = edx[1]
                char temp1_1 = ecx_1[1]
                c_1 = eax_3.b u< temp1_1
                bool z_2 = eax_3.b == temp1_1
                char var_21_2 = eax_3.b
                eax_3 = var_2c
                
                if (z_2)
                    edx = &edx[2]
                    ecx_1 = &ecx_1[2]
                    
                    if (var_21_2 != 0)
                        continue
                    
                    esi_1 = 0
                    break
            
            esi_1 = sbb.d(arg2, arg2, c_1) | 1
            break
        
        int32_t var_14_1 = 0
        
        if (data_aca1f4 != 0 && eax_3 != 0 && *eax_3 != 0)
            char* eax_4 = sub_48a080(&var_2c)
            int32_t temp2_1 = *(eax_4 + 4)
            *(eax_4 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
                var_2c = &data_5b2591
        
        int32_t var_14_2 = 0xffffffff
        float var_40
        int32_t xmm0_2
        
        if (esi_1 == 0)
            xmm0_2 = sub_4b9c10(arg1) ^ (data_60cca0.o).d
        label_4b9fb2:
            int32_t var_3c_1 = xmm0_2
            var_40 = 0f
        label_4b9fc1:
            int32_t eax_5 = sub_4b9af0(arg1, &var_40)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_5
        
        sub_48a2c0(&var_2c, "btn_scroll_down")
        char* const eax_6 = var_2c
        char* edx_4 = arg2[1]
        char* const ecx_10 = &data_5b2591
        
        if (eax_6 != 0)
            ecx_10 = eax_6
        
        int32_t esi_3
        
        while (true)
            eax_6.b = *edx_4
            char temp3_1 = *ecx_10
            bool c_2 = eax_6.b u< temp3_1
            bool z_3 = eax_6.b == temp3_1
            char var_21_3 = eax_6.b
            eax_6 = var_2c
            
            if (z_3)
                if (var_21_3 == 0)
                    esi_3 = 0
                    break
                
                eax_6.b = edx_4[1]
                char temp4_1 = ecx_10[1]
                c_2 = eax_6.b u< temp4_1
                bool z_4 = eax_6.b == temp4_1
                char var_21_4 = eax_6.b
                eax_6 = var_2c
                
                if (z_4)
                    edx_4 = &edx_4[2]
                    ecx_10 = &ecx_10[2]
                    
                    if (var_21_4 != 0)
                        continue
                    
                    esi_3 = 0
                    break
            
            esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
            break
        
        int32_t var_14_3 = 1
        
        if (data_aca1f4 != 0 && eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&var_2c)
            int32_t temp5_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                var_2c = &data_5b2591
        
        int32_t var_14_4 = 0xffffffff
        
        if (esi_3 == 0)
            xmm0_2 = sub_4b9c10(arg1)
            goto label_4b9fb2
        
        sub_48a2c0(&var_2c, "btn_scroll_channel_top")
        char* eax_8 = sub_48a520(arg2[1], &var_2c)
        char var_21_5 = eax_8.b
        int32_t var_14_5 = 2
        
        if (data_aca1f4 != 0)
            char* const ecx_16 = var_2c
            
            if (ecx_16 != 0 && *ecx_16 != 0)
                eax_8 = sub_48a080(&var_2c)
                int32_t temp6_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_2c = &data_5b2591
                
                eax_8.b = var_21_5
        
        int32_t var_14_6 = 0xffffffff
        
        if (eax_8.b != 0)
            float xmm1_2 = *(arg1 + 0x10ac) f- *(arg1 + 0x10a4)
            var_40 = 0f
            int32_t var_3c_2 = xmm1_2 ^ (data_60cca0.o).d
            goto label_4b9fc1
        
        sub_48a2c0(&var_2c, "btn_scroll_channel_bottom")
        char* eax_9 = sub_48a520(arg2[1], &var_2c)
        char var_21_6 = eax_9.b
        int32_t var_14_7 = 3
        
        if (data_aca1f4 != 0)
            char* const ecx_21 = var_2c
            
            if (ecx_21 != 0 && *ecx_21 != 0)
                eax_9 = sub_48a080(&var_2c)
                int32_t temp7_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
                    var_2c = &data_5b2591
                
                eax_9.b = var_21_6
        
        int32_t var_14_8 = 0xffffffff
        
        if (eax_9.b != 0)
            float xmm1_5 = *(arg1 + 0x10ac) f- *(arg1 + 0x10a4)
            var_40 = 0f
            float var_3c_3 = xmm1_5
            goto label_4b9fc1
        
        char* const var_34
        sub_48a2c0(&var_34, "btn_scroll_nub")
        int32_t var_14_9 = 4
        int32_t var_38_1 = 1
        int32_t esi_6 = 1
        char var_3c_4 = 1
        char eax_10 = sub_48a520(arg2[1], &var_34)
        char eax_12
        
        if (eax_10 == 0)
            sub_48a2c0(&var_2c, "btn_scroll")
            var_3c_4 = 3
            esi_6 = 3
            eax_12 = sub_48a520(arg2[1], &var_2c)
        
        char var_21_7
        char eax_13
        
        if (eax_10 != 0 || eax_12 != 0)
            eax_13 = var_3c_4
            var_21_7 = 1
        else
            var_21_7 = eax_12
            eax_13 = 3
        
        if ((eax_13 & 2) != 0)
            int32_t var_38_2 = esi_6 & 0xfffffffd
            int32_t var_14_10 = 5
            
            if (data_aca1f4 != 0)
                char* const eax_14 = var_2c
                
                if (eax_14 != 0 && *eax_14 != 0)
                    char* eax_15 = sub_48a080(&var_2c)
                    int32_t temp9_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
                        var_2c = &data_5b2591
        
        int32_t var_14_11 = 6
        
        if (data_aca1f4 != 0)
            char* eax_16 = var_34
            
            if (eax_16 != 0 && *eax_16 != 0)
                char* eax_17 = sub_48a080(&var_34)
                int32_t temp8_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_34 = &data_5b2591
        
        int32_t var_14_12 = 0xffffffff
        
        if (var_21_7 == 0)
            goto label_4ba2e8
        
        int32_t esi_8 = *arg2
        
        if (esi_8 == 0)
            sub_489550(arg2, &data_5b2591, "id != DATAID_NULL", 
                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        uint32_t eax_19 = zx.d(esi_8.w)
        void* edx_20
        
        if (eax_19 u< data_63e5ac)
            edx_20 = eax_19 * 0x1418 + data_63e5a8
        
        if (eax_19 u>= data_63e5ac || *(edx_20 + 0x1410) != esi_8)
            sub_489550(eax_19, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_20 = sub_4b9c90(eax_19, edx_20, arg1, arg2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_20
}
