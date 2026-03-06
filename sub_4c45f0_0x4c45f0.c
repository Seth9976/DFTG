// 函数名称: sub_4c45f0
// 虚拟地址: 0x4c45f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4c45f0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    
    if (eax == 0)
        return sub_4c43b0(eax, 0x5f495c, arg1, 0xc, arg2)
    
    if (eax == 1)
        return sub_4c43b0(eax - 1, 0x5f4908, arg1, 0x15, arg2)
    
    void* eax_3 = eax - 2
    int32_t var_20
    char const* const var_1c
    char* ecx
    
    if (eax == 2)
        int32_t edi_1 = arg1[2]
        void* ecx_1 = arg2 + 8
        int32_t var_8_1 = edi_1
        wchar32 const* const esi_1 = U"#$%&'()"
        
        while (true)
            wchar32 const edx = *esi_1
            *(ecx_1 - 8) = edx
            *(ecx_1 - 4) = edi_1
            
            if (edx s< 0x23)
                var_1c = "ClickStateAllocHand"
                var_20 = 0xb2
                ecx = "ButtonSourceIsHanded(source)"
                break
            
            eax_3 = (edx - 0x23) * 0x32c
            
            if (edi_1 != 0)
                eax_3 = eax_3 + 0x8544 + arg1
                *ecx_1 = eax_3
                
                if (edx - 0x23 u> 6)
                    var_1c = "ClickStateAllocHand"
                    var_20 = 0xd0
                    ecx = "Halt"
                    break
                
                switch (edx)
                    case 0x23
                        *eax_3 = "rh oc touch a"
                    case 0x24
                        *eax_3 = "rh oc touch b"
                    case 0x25
                        *eax_3 = "rh oc touch trigger"
                    case 0x26
                        *eax_3 = "rh vive trigger"
                    case 0x27
                        *eax_3 = "rh vive grip"
                    case 0x28
                        *eax_3 = "rh vive trackpad"
                    case 0x29
                        *eax_3 = "rh vive menu"
            else
                void* edi_3 = &arg1[0x1bc4] + eax_3
                *ecx_1 = edi_3
                
                if (edx - 0x23 u> 6)
                    var_1c = "ClickStateAllocHand"
                    var_20 = 0xc2
                    ecx = "Halt"
                    break
                
                switch (edx)
                    case 0x23
                        *edi_3 = "lh oc touch a"
                        edi_1 = var_8_1
                    case 0x24
                        *edi_3 = "lh oc touch b"
                        edi_1 = var_8_1
                    case 0x25
                        *edi_3 = "lh oc touch trigger"
                        edi_1 = var_8_1
                    case 0x26
                        *edi_3 = "lh vive trigger"
                        edi_1 = var_8_1
                    case 0x27
                        *edi_3 = "lh vive grip"
                        edi_1 = var_8_1
                    case 0x28
                        *edi_3 = "lh vive trackpad"
                        edi_1 = var_8_1
                    case 0x29
                        *edi_3 = "lh vive menu"
                        edi_1 = var_8_1
            
            esi_1 = &esi_1[1]
            ecx_1 += 0xc
            
            if (esi_1 s>= 0x5f4908)
                return sub_4c43b0(arg2 + 0x54, 0x5f48d4, arg1, 6, arg2 + 0x54) + 7
    else
        var_1c = "ControllerGetClickState"
        var_20 = 0x144
        ecx = "Halt"
    
    sub_489550(eax_3, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\controller.cpp", var_20, var_1c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
