// 函数名称: sub_54dee0
// 虚拟地址: 0x54dee0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_54dee0(char* arg1)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    
    if (arg1.b != 0)
        sub_50c600(arg1)
    
    int32_t i = data_1267864
    char* eax_1
    
    if (i != 0x80)
        eax_1 = data_1267868
    else
        int32_t* esi_1 = data_11e8070
        
        if ((esi_1[2].b & 1) == 0)
            esi_1[3]
            sub_4cead0(*esi_1)
            *esi_1 = 0
        
        char** ecx_1 = esi_1[1]
        
        if (ecx_1 != 0)
            sub_4d4bb0(ecx_1)
            esi_1[1] = 0
        
        _aligned_free_base(esi_1)
        sub_579a90(0x11e7064, 0x11e8074, 0x7f7f0)
        i = data_1267864 - 1
        eax_1 = data_1267868 - 1
        data_1267864 = i
        data_1267868 = eax_1
    
    int32_t var_1c
    char const* const var_18_3
    char* ecx_5
    
    if (i s< eax_1)
        void* ebx_2 = &(&data_11e8070)[i * 0x404]
        
        do
            int32_t* esi_2 = *ebx_2
            
            if (esi_2[1] != 0)
                var_18_3 = "CreateUndoCheckpoint"
                var_1c = 0xf2
                ecx_5 = "gUI.undoStack[i].def->pParseTree == NULL"
                goto label_54e073
            
            if ((esi_2[2].b & 1) == 0)
                esi_2[3]
                sub_4cead0(*esi_2)
                char** ecx_3 = esi_2[1]
                *esi_2 = 0
                
                if (ecx_3 != 0)
                    sub_4d4bb0(ecx_3)
                    esi_2[1] = 0
            
            eax_1 = _aligned_free_base(esi_2)
            i += 1
            ebx_2 += 0x1010
        while (i s< data_1267868)
        
        i = data_1267864
    
    sub_579300(i * 0x1010 + 0x11e7064, &data_11e6058, 0x100c)
    void* ebx_3 = data_12baaec
    int32_t* esi_3 = *data_11e6050
    int128_t* eax_5 = sub_4c2e40(0x10)
    *eax_5 = zx.o(0)
    *eax_5 = sub_4cf020(*esi_3, ebx_3)
    eax_1 = i * 0x1010 + 0x11e7064
    *(eax_5 + 0xc) = ebx_3
    *(eax_1 + 0x100c) = eax_5
    
    if (*(eax_5 + 4) == 0)
        int32_t result = data_1267864 + 1
        data_1267864 = result
        data_1267868 = result
        return result
    
    var_18_3 = "SaveUndoState"
    var_1c = 0xd8
    ecx_5 = "s.def->pParseTree == NULL"
    label_54e073:
    sub_489550(eax_1, &data_5b2591, ecx_5, "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp", var_1c, 
        var_18_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
