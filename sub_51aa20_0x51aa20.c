// 函数名称: sub_51aa20
// 虚拟地址: 0x51aa20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_51aa20(int32_t* arg1))[0x4]
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2538
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg1
    sub_51ade0(arg1)
    int32_t eax_3 = esi[1]
    
    if (eax_3 != 0x19)
        if (eax_3 == 0x12)
            data_1151aec = 2
            uint32_t (* eax_5)[0x4] = _memset(&data_1151af0, 0, 0x9c)
            int32_t xmm0_2 = data_620d84
            data_1151b0c = 0x43c80000
            data_1151b10 = 0x44160000
            data_1151b44 = 0x3f800000
            data_1151b48 = esi
            data_1151b84 = xmm0_2
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_5
        
        if (eax_3 != 0x18)
            if (eax_3 != 2)
                if (eax_3 == 0x1e)
                    sub_547100(esi)
                    sub_517130()
                    esi[7] -= 1
                    sub_4d11a0(esi)
                    sub_488f70(esi)
                    int32_t eax_6 = sub_54dbb0(esi)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_6
                
                if (eax_3 != 0x1d)
                    if (eax_3 == 0x22)
                        sub_547100(esi)
                        sub_517130()
                        esi[7] -= 1
                        sub_4d11a0(esi)
                        sub_488f70(esi)
                        int32_t eax_13 = sub_4b9560(esi)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_13
                    
                    if (eax_3 != 0x20)
                        sub_489550(eax_3, &data_5b2591, "Halt", 
                            "d:\ax\trunk\ax2017\engine\editor\editmode.cpp", 0x81c, "HolodeckView")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    sub_546f00(esi)
                    sub_517130()
                    esi[7] -= 1
                    sub_4d11a0(esi)
                    sub_488f70(esi)
                    int32_t eax_14 = sub_5474f0(esi)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_14
                
                sub_547100(esi)
                sub_517130()
                esi[7] -= 1
                sub_4d11a0(esi)
                sub_488f70(esi)
                void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
                data_126b8bc = esi
                void* esi_1 = *ThreadLocalStoragePointer
                
                if (data_151766c s> *(esi_1 + 4))
                    __Init_thread_header(&data_151766c)
                    
                    if (data_151766c == 0xffffffff)
                        int32_t var_8_1 = 0
                        data_1517670 = sub_4d0b50("sys/material_editor.ui", 0x1e)
                        int32_t var_8_2 = 0xffffffff
                        __Init_thread_footer(&data_151766c)
                
                data_126b8c0 = sub_4ca240(data_1517670)
                void* eax_10 = data_1517674
                
                if (eax_10 s> *(esi_1 + 4))
                    eax_10 = __Init_thread_header(&data_1517674)
                    
                    if (data_1517674 == 0xffffffff)
                        int32_t var_8_3 = 1
                        data_1517678 = sub_4c8f00(data_1517670, "tblLayers")
                        int32_t var_8_4 = 0xffffffff
                        eax_10 = __Init_thread_footer(&data_1517674)
                
                int32_t eax_12 = sub_50c600(sub_4cd5a0(eax_10, data_1517678, data_126b8c0, sub_55a4b0))
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_12
            
            sub_546f00(esi)
        else
            sub_547100(esi)
    else
        data_1151aec = 2
        _memset(&data_1151af0, 0, 0x9c)
        int32_t xmm0_1 = data_620d84
        data_1151b0c = 0x43c80000
        data_1151b10 = 0x44160000
        data_1151b44 = 0x3f800000
        data_1151b48 = esi
        data_1151b84 = xmm0_1
        sub_517130()
    
    void* eax_4 = sub_546800()
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4
}
