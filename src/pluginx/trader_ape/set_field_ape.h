/*
* Copyright (c) 2018-2018 the TradeX authors
* All rights reserved.
*
* The project sponsor and lead author is Xu Rendong.
* E-mail: xrd@ustc.edu, QQ: 277195007, WeChat: ustc_xrd
* See the contributors file for names of other contributors.
*
* Commercial use of this code in source and binary forms is
* governed by a LGPL v3 license. You may get a copy from the
* root directory. Or else you should get a specific written
* permission from the project author.
*
* Individual and educational use of this code in source and
* binary forms is governed by a 3-clause BSD license. You may
* get a copy from the root directory. Certainly welcome you
* to contribute code of all sorts.
*
* Be sure to retain the above copyright notice and conditions.
*/

#ifndef TRADER_APE_SET_FIELD_APE_H
#define TRADER_APE_SET_FIELD_APE_H

#include "struct_ape.h"

class SetField
{
public:
	SetField();
	~SetField();

public:
	typedef bool (SetField::*SetFieldFunc)( int32_t api_session, Request* request );

	bool SetField_120001_204501( int32_t api_session, Request* request ); // 单个委托下单
	bool SetField_120002_204502( int32_t api_session, Request* request ); // 单个委托撤单
	bool SetField_120003_204513( int32_t api_session, Request* request ); // 批量委托下单
	bool SetField_120004_204511( int32_t api_session, Request* request ); // 批量委托撤单
	bool SetField_120005_204545( int32_t api_session, Request* request ); // 港股通买卖委托
	bool SetField_120006_204546( int32_t api_session, Request* request ); // 港股通委托撤单
	bool SetField_130002_303002( int32_t api_session, Request* request ); // 查询客户资金
	bool SetField_130004_304101( int32_t api_session, Request* request ); // 查询客户持仓
	bool SetField_130005_304103( int32_t api_session, Request* request ); // 查询客户当日委托
	bool SetField_130006_304110( int32_t api_session, Request* request ); // 查询客户当日成交
	bool SetField_130008_104105( int32_t api_session, Request* request ); // 查询ETF基本信息
	bool SetField_130009_104106( int32_t api_session, Request* request ); // 查询ETF成分股信息

public:
	basicx::SysLog_S* m_syslog;
	std::unordered_map<int32_t, SetFieldFunc> m_map_set_field_func;
};

#endif // TRADER_APE_SET_FIELD_APE_H
