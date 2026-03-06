// 函数名称: sub_51a7f0
// 虚拟地址: 0x51a7f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_51a7f0()
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_10
    char const* const var_c
    uint32_t (* eax)[0x4]
    char* ecx_1
    
    if (data_1151ad0 == 0)
        int32_t* eax_1 = sub_498440(0x88)
        eax_1[3] += 1
        int32_t* edi_1 = *eax_1
        
        if (edi_1 == 0)
            sub_4982d0(eax_1)
            edi_1 = *eax_1
        
        *eax_1 = *edi_1
        eax = _memset(edi_1, 0, 0x88)
        edi_1[4] = 0
        edi_1[5] = 0
        edi_1[0xd] = 0
        edi_1[0xe] = 0
        edi_1[0xf] = 0
        bool cond:1_1 = *edi_1 != 0
        data_1151ad0 = edi_1
        
        if (not(cond:1_1))
            uint32_t eax_3 = sub_426d50(0x400)
            *edi_1 = sub_498490(eax_3 << 2)
            edi_1[1] = eax_3 - 1
            *(data_1151ad0 + 0x84) = 1
            return sub_546e30() __tailcall
        
        var_c = "XMap<enum StructureID,struct EditModeStructure>::SetNumBuckets"
        var_10 = 0x72
        var_14 = "d:\ax\trunk\ax2017\engine\xmap.h"
        ecx_1 = "mNodeBuckets == NULL"
    else
        var_c = "EditModeInitForGame"
        var_10 = 0xc5
        var_14 = "d:\ax\trunk\ax2017\engine\editor\editmode.cpp"
        ecx_1 = "!gpEditModeData"
    
    sub_489550(eax, &data_5b2591, ecx_1, var_14, var_10, var_c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
