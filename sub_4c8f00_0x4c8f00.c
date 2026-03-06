// 函数名称: sub_4c8f00
// 虚拟地址: 0x4c8f00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4c8f00(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t var_24
    char const* const var_20
    char* ecx
    
    if (eax[1] == 0x1e)
        int32_t* eax_1 = sub_4981f0(arg1)
        int32_t result = 0
        int32_t ebx_1 = eax_1[2]
        
        if (ebx_1 s> 0)
            int32_t* edi_2 = *eax_1 + 8
            
            while (true)
                char* eax_2 = arg2
                char* ecx_1 = *edi_2
                int32_t eax_4
                
                while (true)
                    char edx = *ecx_1
                    char temp0_1 = *eax_2
                    bool c_1 = edx u< temp0_1
                    
                    if (edx == temp0_1)
                        if (edx == 0)
                            eax_4 = 0
                            break
                        
                        edx = ecx_1[1]
                        char temp1_1 = eax_2[1]
                        c_1 = edx u< temp1_1
                        
                        if (edx == temp1_1)
                            ecx_1 = &ecx_1[2]
                            eax_2 = &eax_2[2]
                            
                            if (edx != 0)
                                continue
                            
                            eax_4 = 0
                            break
                    
                    eax_4 = sbb.d(eax_2, eax_2, c_1) | 1
                    break
                
                if (eax_4 == 0)
                    return result
                
                result += 1
                edi_2 = &edi_2[0x5e]
                
                if (result s>= ebx_1)
                    break
        
        char* const ecx_2 = &data_5b2591
        char* eax_7 = eax[8]
        
        if (eax_7 != 0)
            ecx_2 = eax_7
        
        char* const var_20_1 = ecx_2
        char* var_24_1 = arg2
        eax = sub_4894d0("couldn't find element %s in %s")
        ecx = "Halt"
        var_20 = "UILayoutGetElementIndex"
        var_24 = 0x1fc
    else
        var_20 = "UIDefGet"
        var_24 = 0x126
        ecx = "ptr->assetType == ASSET_TYPE_UI"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\uidef.cpp", var_24, var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
