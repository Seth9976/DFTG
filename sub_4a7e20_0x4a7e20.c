// 函数名称: sub_4a7e20
// 虚拟地址: 0x4a7e20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4a7e20(char arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg1
    int32_t* i_3 = nullptr
    char* ecx = sub_4bc830(&data_63e5a8, &i_3)
    
    for (int32_t* i = i_3; i != 0xffffffff; i = i_3)
        i[0x38b] = 2
        ecx = sub_4bc830(&data_63e5a8, &i_3)
    
    if (ebx.b != 0)
        sub_50c600(ecx)
    
    int32_t i_1 = data_6c4468
    int32_t* i_4
    
    if (i_1 != 0x80)
        i_4 = data_6c446c
    else
        int32_t* esi_1 = data_644680
        
        if ((esi_1[2].b & 1) == 0)
            esi_1[3]
            sub_4cead0(*esi_1)
            *esi_1 = 0
        
        char** ecx_2 = esi_1[1]
        
        if (ecx_2 != 0)
            sub_4d4bb0(ecx_2)
            esi_1[1] = 0
        
        _aligned_free_base(esi_1)
        sub_579a90(0x643668, 0x644684, 0x7fde4)
        i_1 = data_6c4468 - 1
        i_4 = data_6c446c - 1
        data_6c4468 = i_1
        data_6c446c = i_4
    
    int32_t var_24
    char const* const var_20_4
    char* ecx_8
    
    if (i_1 s< i_4)
        void* ebx_2 = &(&data_644680)[i_1 * 0x407]
        
        do
            int32_t* esi_2 = *ebx_2
            
            if (esi_2[1] != 0)
                var_20_4 = "UI2CreateUndoCheckpoint"
                var_24 = 0x2064
                ecx_8 = "gUI2Editor.undoStack[i].def->pParseTree == NULL"
                goto label_4a8027
            
            if ((esi_2[2].b & 1) == 0)
                esi_2[3]
                sub_4cead0(*esi_2)
                char** ecx_4 = esi_2[1]
                *esi_2 = 0
                
                if (ecx_4 != 0)
                    sub_4d4bb0(ecx_4)
                    esi_2[1] = 0
            
            i_4 = _aligned_free_base(esi_2)
            i_1 += 1
            ebx_2 += 0x101c
        while (i_1 s< data_6c446c)
        
        i_1 = data_6c4468
    
    sub_579300(i_1 * 0x101c + 0x643668, &data_642650, 0x1018)
    void* edi_1 = data_126cc8c
    int32_t* esi_3 = *data_642620
    int32_t* i_5 = sub_4c2e40(0x10)
    i_3 = i_5
    *i_5 = zx.o(0)
    *i_5 = sub_4cf020(*esi_3, edi_1)
    i_5[3] = edi_1
    int32_t i_2 = 0
    *(i_1 * 0x101c + 0x644680) = i_5
    int32_t* ebx_4 = *i_5
    
    if (ebx_4[2] s<= 0)
        i_4 = i_3
    else
        int32_t esi_4 = 0
        
        do
            sub_4a7a10(*ebx_4 + esi_4)
            i_2 += 1
            esi_4 += 0x18
        while (i_2 s< ebx_4[2])
        
        i_4 = *(i_1 * 0x101c + 0x644680)
    
    if (i_4[1] == 0)
        int32_t result = data_6c4468 + 1
        data_6c4468 = result
        data_6c446c = result
        return result
    
    var_20_4 = "UI2SaveUndoState"
    var_24 = 0x201a
    ecx_8 = "s.def->pParseTree == NULL"
    label_4a8027:
    sub_489550(i_4, &data_5b2591, ecx_8, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_24, var_20_4)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
