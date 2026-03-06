// 函数名称: sub_54d840
// 虚拟地址: 0x54d840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_54d840(char* arg1)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    
    if (arg1.b != 0)
        sub_50c600(arg1)
    
    int32_t i = data_11d2f98
    char* eax_1
    
    if (i != 0x80)
        eax_1 = data_11d2f9c
    else
        int32_t* esi_1 = data_1153b9c
        
        if ((esi_1[2].b & 1) == 0)
            esi_1[3]
            sub_4cead0(*esi_1)
            *esi_1 = 0
        
        char** ecx_1 = esi_1[1]
        
        if (ecx_1 != 0)
            sub_4d4bb0(ecx_1)
            esi_1[1] = 0
        
        _aligned_free_base(esi_1)
        sub_579a90(0x1152b98, 0x1153ba0, 0x7f3f8)
        i = data_11d2f98 - 1
        eax_1 = data_11d2f9c - 1
        data_11d2f98 = i
        data_11d2f9c = eax_1
    
    int32_t var_1c
    char const* const var_18_3
    char* ecx_5
    
    if (i s< eax_1)
        void* ebx_2 = &(&data_1153b9c)[i * 0x402]
        
        do
            int32_t* esi_2 = *ebx_2
            
            if (esi_2[1] != 0)
                var_18_3 = "FabCreateUndoCheckpoint"
                var_1c = 0x902
                ecx_5 = "gFab.undoStack[i].def->pParseTree == NULL"
                goto label_54d9d3
            
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
            ebx_2 += 0x1008
        while (i s< data_11d2f9c)
        
        i = data_11d2f98
    
    sub_579300(i * 0x1008 + 0x1152b98, &data_1151b94, 0x1004)
    void* ebx_3 = data_12bac14
    int32_t* esi_3 = *data_1151b90
    int128_t* eax_5 = sub_4c2e40(0x10)
    *eax_5 = zx.o(0)
    *eax_5 = sub_4cf020(*esi_3, ebx_3)
    eax_1 = i * 0x1008 + 0x1152b98
    *(eax_5 + 0xc) = ebx_3
    *(eax_1 + 0x1004) = eax_5
    
    if (*(eax_5 + 4) == 0)
        int32_t result = data_11d2f98 + 1
        data_11d2f98 = result
        data_11d2f9c = result
        return result
    
    var_18_3 = "FabSaveUndoState"
    var_1c = 0x8e8
    ecx_5 = "s.def->pParseTree == NULL"
    label_54d9d3:
    sub_489550(eax_1, &data_5b2591, ecx_5, "d:\ax\trunk\ax2017\engine\editor\fabeditor.cpp", var_1c, 
        var_18_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
