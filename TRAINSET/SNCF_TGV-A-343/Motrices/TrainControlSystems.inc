	Comment( TrainControlSystems.inc )

	ORTSTrainControlSystem( "..\\..\\common.script\\sharpe49\\TGVA\\ORTS\\TCS_France.cs" ) 

	ORTSTrainControlSystemSound( "..\\..\\common.sound\\TCS_France\\TCS_France_V2.sms" )

	ORTSTrainControlSystemParameters( "..\\..\\common.script\\sharpe49\\TGVA\\ORTS\\TGVA_TVM300.ini" )

	ORTSTrainBrakeController( "..\\..\\common.script\\sharpe49\\TGVA\\ORTS\\PBA2BrakeController.cs" )

	comment(-------- Script disjoncteur --------)

	ORTSPowerOnDelay 					( 0.5s )

	ORTSAuxPowerOnDelay 					( 5s )
	
	ORTSCircuitBreaker( "..\\..\\common.script\\sharpe49\\TGVA\\ORTS\\SNCFCircuitBreaker.cs" )
	
	ORTSCircuitBreakerClosingDelay( 2s )

	comment(-------- Script chauffage train --------)
	
	ORTSElectricTrainSupply (	
	ORTSPowerSupply( "..\\..\\common.script\\sharpe49\\TGVA\\ORTS\\SNCFTGVPowerSupply.cs" )
	Mode ( Automatic )
	ORTSPowerOnDelay ( 5s )
	ORTSAuxPowerOnDelay ( 10s )
	)