// 函数名称: sub_510920
// 虚拟地址: 0x510920
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_510920()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t* ecx_1 = data_1151ad8
    int32_t esi
    
    if (ecx_1 == 0 || ecx_1[1] != 0x19)
        esi = 0
    else
        int32_t eax_1 = sub_4981f0(ecx_1)
        ecx_1 = data_1151ad8
        esi = eax_1
    
    int32_t* ebx
    
    if (ecx_1 == 0 || ecx_1[1] != 0x1b)
        ebx = nullptr
    else
        ebx = sub_4981f0(ecx_1)
    
    LRESULT eax_4
    int32_t ecx_2
    eax_4, ecx_2 = SendMessageA(GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
    
    if (esi != 0)
        int32_t* result
        int32_t ecx_3
        result, ecx_3 = sub_5103a0(nullptr, 5)
        
        if (result == 0)
            return result
        
        LRESULT edi_1
        
        if (eax_4 != 0xffffffff)
            edi_1 = eax_4 + 1
        else
            edi_1 = 0
        
        int32_t var_20_1 = ecx_3
        int32_t* eax_5 = sub_4cf8e0(data_12bad08, 0)
        sub_518870(eax_5, eax_5, esi, edi_1)
        sub_510770(edi_1)
        char* eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(result)
        char* ecx_7 = sub_4f0910(eax_7, edi_1 * 0x168 + *esi, &data_626728, 5, eax_7, edx_2)
        void* eax_8 = data_1151ad8
        
        if (eax_8 != 0)
            int32_t eax_9 = *(eax_8 + 4)
            
            if (eax_9 == 0x19)
                ecx_7 = sub_50e390(edi_1, 0xffffffff)
            else if (eax_9 == 0x1b)
                ecx_7 = sub_50e950(edi_1)
        
        data_1151084 = 0
        sub_50c600(ecx_7)
        sub_546950()
        return sub_546800()
    
    if (ebx == 0)
        sub_489550(eax_4, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 
            0x9b7, "EditorAddEmitter")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    LRESULT edi_2
    
    if (eax_4 != 0xffffffff)
        edi_2 = eax_4 + 1
    else
        edi_2 = 0
    
    int32_t var_20_3 = ecx_2
    int32_t* eax_10 = sub_4cf8e0(data_12bad3c, 0)
    sub_518870(eax_10, eax_10, ebx, edi_2)
    int32_t ecx_12 = edi_2 * 3
    int32_t* esi_1 = *ebx + (ecx_12 << 3)
    int32_t var_20_4 = ecx_12
    int32_t* eax_12 = sub_4cf8e0(data_12bad4c, 0)
    int32_t var_20_5 = sub_518870(eax_12, eax_12, esi_1, 0)
    int32_t* eax_13 = sub_4cf8e0(data_12bad4c, 0)
    char* ecx_18 = sub_518870(eax_13, eax_13, esi_1, 0)
    int32_t* eax_14 = *esi_1
    *eax_14 = 0
    eax_14[1] = 0
    eax_14[2] = 0
    eax_14[3] = 1
    void* eax_15 = *esi_1
    *(eax_15 + 0x10) = 0x3f800000
    *(eax_15 + 0x14) = 0x3f800000
    *(eax_15 + 0x18) = 0x3f800000
    *(eax_15 + 0x1c) = 1
    void* eax_16 = data_1151ad8
    
    if (eax_16 != 0)
        int32_t eax_17 = *(eax_16 + 4)
        
        if (eax_17 == 0x19)
            char* ecx_20 = sub_50e390(edi_2, 0xffffffff)
            data_1151084 = 0
            return sub_50c600(ecx_20)
        
        if (eax_17 == 0x1b)
            ecx_18 = sub_50e950(edi_2)
    
    data_1151084 = 0
    return sub_50c600(ecx_18)
}
