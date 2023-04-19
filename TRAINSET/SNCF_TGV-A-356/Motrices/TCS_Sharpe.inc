	Comment( TCS_Sharpe.inc )

	ORTSTrainControlSystem( "..\\..\\common.script\\sharpe49\\TGVA\\ORTS_Sharpe\\TCS_France.cs" ) 

	ORTSTrainControlSystemSound( "..\\..\\common.sound\\TCS_France\\TCS_France_V2.sms" )

	ORTSTrainControlSystemParameters( "..\\..\\common.script\\sharpe49\\TGVA\\ORTS_Sharpe\\TGVA_TVM300.ini" )

	ORTSTrainBrakeController( "..\\..\\common.script\\sharpe49\\TGVA\\ORTS_Sharpe\\PBA2BrakeController.cs" )

	comment(-------- Script disjoncteur --------)

	ORTSPowerOnDelay ( 0.5s )

	ORTSAuxPowerOnDelay ( 5s )
	
	ORTSCircuitBreaker( "..\\..\\common.script\\sharpe49\\TGVA\\ORTS_Sharpe\\SNCFCircuitBreaker.cs" )
	
	ORTSCircuitBreakerClosingDelay( 2s )
	

	comment(-------- Script chauffage train --------)
	
	ORTSElectricTrainSupply (	
	Mode ( Switch )
	ORTSPowerOnDelay ( 5s )
	ORTSAuxPowerOnDelay ( 10s )
	)