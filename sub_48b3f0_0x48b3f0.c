// 函数名称: sub_48b3f0
// 虚拟地址: 0x48b3f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_48b3f0(int128_t* arg1, uint32_t arg2)
{
    // 第一条实际指令: uint32_t (* eax)[0x4] = sub_48b1e0()
    uint32_t (* eax)[0x4] = sub_48b1e0()
    uint32_t (* var_8)[0x4] = eax
    (*eax)[1] = arg2
    *eax = *(arg1 + 0x48)
    (*eax)[2] = 0
    *(eax + 0x7e94) = *arg1
    
    if ((*eax)[1] s> 0x3e8)
        return sub_4362d0(data_aca0dc + 0x38, &var_8)
    
    sub_489550(eax, &data_5b2591, "netMessage->messageType > NETMSG_MIN_VALUE", 
        "d:\ax\trunk\ax2017\engine\network.cpp", 0x149, "MessageQueueAppendSimpleMessage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
