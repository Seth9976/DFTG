// 函数名称: sub_5175f0
// 虚拟地址: 0x5175f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

enum MESSAGEBOX_RESULT __fastcallsub_5175f0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a22a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** edi = data_1151ad8
    
    if (edi == 0)
        int32_t eax_3 = *4
        
        if (eax_3 != 0x19 && eax_3 != 0x1b)
            eax_3.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_3
    
    char* lpdwProcessId_1 = edi[8]
    int32_t esi = edi[1]
    char* lpdwProcessId = arg1
    lpdwProcessId = lpdwProcessId_1
    
    if (lpdwProcessId_1 != 0 && *lpdwProcessId_1 != 0)
        char* eax_4 = sub_48a080(&lpdwProcessId)
        *(eax_4 + 4) += 1
    
    enum MESSAGEBOX_RESULT lpdwProcessId_14
    sub_4e6020(&lpdwProcessId_14, esi)
    int32_t var_8_1 = 0
    char* const lpText = &data_5b2591
    char* lpdwProcessId_17 = lpdwProcessId_14
    char* const lpdwProcessId_18 = &data_5b2591
    lpdwProcessId = &data_5f5010
    
    if (lpdwProcessId_17 != 0)
        lpdwProcessId_18 = lpdwProcessId_17
    
    char* lpdwProcessId_2 = _fopen(lpdwProcessId_18, lpdwProcessId)
    enum MESSAGEBOX_RESULT lpdwProcessId_15
    char* lpdwProcessId_10
    enum MESSAGEBOX_RESULT lpdwProcessId_16
    
    if (lpdwProcessId_2 != 0)
        lpdwProcessId = lpdwProcessId_2
        _fclose(lpdwProcessId)
        lpText = *edi
        char** lpdwProcessId_6 = *(lpText + 4)
        
        if (lpdwProcessId_6 != 0)
            lpdwProcessId_6 = sub_4d4bb0(lpdwProcessId_6)
        
        char* lpdwProcessId_9 = *data_1150b90
        lpdwProcessId_10 = lpdwProcessId_9
        
        if (lpdwProcessId_9 != 0 && *lpdwProcessId_9 != 0)
            lpdwProcessId_6 = &lpdwProcessId_10
            char* eax_8 = sub_48a080(lpdwProcessId_6)
            *(eax_8 + 4) += 1
        
        lpdwProcessId = lpdwProcessId_6
        var_8_1.b = 3
        char* lpdwProcessId_3 = edi[8]
        lpdwProcessId = lpdwProcessId_3
        
        if (lpdwProcessId_3 != 0 && *lpdwProcessId_3 != 0)
            char* eax_9 = sub_48a080(&lpdwProcessId)
            *(eax_9 + 4) += 1
        
        char* lpdwProcessId_11
        sub_4e6720(&lpdwProcessId_11)
        var_8_1.b = 4
        char* lpdwProcessId_4 = lpdwProcessId_11
        lpdwProcessId = lpdwProcessId_4
        
        if (lpdwProcessId_4 != 0 && *lpdwProcessId_4 != 0)
            char* eax_10 = sub_48a080(&lpdwProcessId)
            *(eax_10 + 4) += 1
        
        sub_4e3740()
        int32_t* eax_11
        char* lpdwProcessId_7
        eax_11, lpdwProcessId_7 = sub_4d78e0(*lpText, *(lpText + 0xc))
        *(lpText + 4) = eax_11
        lpdwProcessId = lpdwProcessId_7
        lpdwProcessId = lpdwProcessId_9
        
        if (lpdwProcessId_9 != 0 && *lpdwProcessId_9 != 0)
            char* eax_12 = sub_48a080(&lpdwProcessId)
            *(eax_12 + 4) += 1
        
        sub_4e3740()
        
        if (sub_4d1720(edi).b != 0)
            data_11510ac = 0
            lpText.b = 1
        else
            enum MESSAGEBOX_RESULT lpdwProcessId_13 = lpdwProcessId_14
            lpText = &data_5b2591
            enum MESSAGEBOX_RESULT lpdwProcessId_8 = &data_5b2591
            
            if (lpdwProcessId_13 != 0)
                lpdwProcessId_8 = lpdwProcessId_13
            
            lpdwProcessId = lpdwProcessId_8
            char* lpText_2 = *sub_48a9d0(&lpdwProcessId_16, "Failed to save '%s'.")
            
            if (lpText_2 != 0)
                lpText = lpText_2
            
            HWND hWnd_1 = GetForegroundWindow()
            int32_t var_24
            lpdwProcessId = &var_24
            GetWindowThreadProcessId(hWnd_1, lpdwProcessId)
            uint32_t eax_15 = GetCurrentProcessId()
            bool cond:3_1 = var_24 != eax_15
            lpdwProcessId = nullptr
            
            if (cond:3_1)
                hWnd_1 = nullptr
            
            MessageBoxA(hWnd_1, lpText, "Can't save")
            var_8_1.b = 5
            
            if (data_aca1f4 != 0)
                lpdwProcessId_15 = lpdwProcessId_16
                
                if (lpdwProcessId_15 != 0 && *lpdwProcessId_15 != 0)
                    lpdwProcessId_15 = sub_48a080(&lpdwProcessId_16)
                    int32_t temp4_1 = *(lpdwProcessId_15 + 4)
                    *(lpdwProcessId_15 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_4984f0(lpdwProcessId_15, *(lpdwProcessId_15 + 0xc) + 0x10)
                        lpdwProcessId_16 = &data_5b2591
            
            lpText.b = 0
        
        var_8_1.b = 9
        
        if (data_aca1f4 != 0)
            lpdwProcessId_15 = lpdwProcessId_11
            
            if (lpdwProcessId_15 != 0 && *lpdwProcessId_15 != 0)
                lpdwProcessId_15 = sub_48a080(&lpdwProcessId_11)
                int32_t temp2_1 = *(lpdwProcessId_15 + 4)
                *(lpdwProcessId_15 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(lpdwProcessId_15, *(lpdwProcessId_15 + 0xc) + 0x10)
                    lpdwProcessId_11 = &data_5b2591
        
        var_8_1.b = 0xa
        
        if (data_aca1f4 != 0 && lpdwProcessId_9 != 0 && *lpdwProcessId_9 != 0)
            lpdwProcessId_15 = sub_48a080(&lpdwProcessId_10)
            int32_t temp3_1 = *(lpdwProcessId_15 + 4)
            *(lpdwProcessId_15 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(lpdwProcessId_15, *(lpdwProcessId_15 + 0xc) + 0x10)
    else
        char* lpdwProcessId_12 = lpdwProcessId_14
        char* const lpdwProcessId_5 = &data_5b2591
        
        if (lpdwProcessId_12 != 0)
            lpdwProcessId_5 = lpdwProcessId_12
        
        lpdwProcessId = lpdwProcessId_5
        char* lpText_1 = *sub_48a9d0(&lpdwProcessId_16, "Can't open '%s' for saving.")
        
        if (lpText_1 != 0)
            lpText = lpText_1
        
        HWND hWnd = GetForegroundWindow()
        lpdwProcessId = &lpdwProcessId_10
        GetWindowThreadProcessId(hWnd, lpdwProcessId)
        uint32_t eax_7 = GetCurrentProcessId()
        bool cond:1_1 = lpdwProcessId_10 != eax_7
        lpdwProcessId = nullptr
        
        if (cond:1_1)
            hWnd = nullptr
        
        MessageBoxA(hWnd, lpText, "Can't save")
        var_8_1.b = 1
        
        if (data_aca1f4 != 0)
            lpdwProcessId_15 = lpdwProcessId_16
            
            if (lpdwProcessId_15 != 0 && *lpdwProcessId_15 != 0)
                lpdwProcessId_15 = sub_48a080(&lpdwProcessId_16)
                int32_t temp0_1 = *(lpdwProcessId_15 + 4)
                *(lpdwProcessId_15 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(lpdwProcessId_15, *(lpdwProcessId_15 + 0xc) + 0x10)
        
        lpText.b = 0
    int32_t var_8_2 = 0xb
    
    if (data_aca1f4 != 0)
        lpdwProcessId_15 = lpdwProcessId_14
        
        if (lpdwProcessId_15 != 0 && *lpdwProcessId_15 != 0)
            lpdwProcessId_15 = sub_48a080(&lpdwProcessId_14)
            int32_t temp1_1 = *(lpdwProcessId_15 + 4)
            *(lpdwProcessId_15 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(lpdwProcessId_15, *(lpdwProcessId_15 + 0xc) + 0x10)
    
    lpdwProcessId_15.b = lpText.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return lpdwProcessId_15
}
