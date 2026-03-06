// 函数名称: sub_478020
// 虚拟地址: 0x478020
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_478020(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* result
    
    if (sub_477fc0(arg1).b == 0)
        if (sub_46bdf0(arg1).b != 0)
            result.b = 0
            return result
        
        if (sub_46bd40(arg1).b != 0)
            result.b = 0
            return result
        
        int32_t edi_1
        
        if (data_62b1ac != 0x21)
            if (data_62b1bc != 0x21)
                result.b = 0
                return result
            
            edi_1 = data_62b1c0
        else
            edi_1 = data_62b1b0
        
        if (edi_1 == 0)
            result.b = 0
            return result
        
        int32_t eax = sub_425f20(arg1)
        int32_t esi_1 = eax * 9
        result = sub_426ed0((esi_1 << 2) + &data_1514cf4, edi_1, "tbl_opponents", eax - 1)
        
        if (result == 0)
            result.b = 0
            return result
        
        if (sub_4bbf60(sub_426e60((esi_1 << 2) + &data_1514d84, result, "tbl_oppDevTile")).b == 0)
            result.b = 0
            return result
    
    result.b = 1
    return result
}
