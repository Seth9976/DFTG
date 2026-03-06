// 函数名称: sub_4b0a20
// 虚拟地址: 0x4b0a20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4b0a20(char* arg1, char arg2)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    var_8.b = arg2 ^ 1
    
    if ((0x8000 & GetKeyState(0x11)) != 0 && *(data_aca1f0 + 0x18) != 0)
        HWND eax_2 = GetFocus()
        
        if ((eax_2 == data_1150b8c || eax_2 == 0) && (0x8000 & GetKeyState(0x12)) != 0
                && *(data_aca1f0 + 0x18) != 0)
            HWND eax_5 = GetFocus()
            
            if (eax_5 == data_1150b8c || eax_5 == 0)
                char* eax_6 = sub_4b09f0(arg1)
                sub_4b0970(eax_6, eax_6, data_642620, var_8)
    
    if ((0x8000 & GetKeyState(0x12)) != 0 && *(data_aca1f0 + 0x18) != 0)
        HWND eax_9 = GetFocus()
        
        if (eax_9 == data_1150b8c || eax_9 == 0)
            return sub_4b0970(eax_9, arg1, data_642620, var_8)
    
    if ((0x8000 & GetKeyState(0x11)) != 0 && *(data_aca1f0 + 0x18) != 0)
        HWND eax_13 = GetFocus()
        
        if (eax_13 == data_1150b8c || eax_13 == 0)
            void* result = *(arg1 + 0x112c)
            
            if (result != 0)
                int32_t i = 0
                
                if (*(result + 0x1190) s<= 0)
                    return result
                
                do
                    char* eax_14 = sub_49ea50(result, i)
                    
                    if (*(eax_14 + 0xff4) == data_642620)
                        sub_4a9e30(eax_14, 0x87)
                        sub_4f0ac0(0x87, var_8.b)
                        sub_4a3580(eax_14)
                        sub_4ada50(eax_14)
                    
                    result = *(arg1 + 0x112c)
                    i += 1
                while (i s< *(result + 0x1190))
                
                return result
    
    sub_4a9e30(arg1, 0x87)
    sub_4f0ac0(0x87, var_8.b)
    sub_4a3580(arg1)
    return sub_4ada50(arg1)
}
