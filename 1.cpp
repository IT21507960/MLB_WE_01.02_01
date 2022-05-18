class Renter
{
	private:
		int RID;
		int vehicleNo;
		char vehicleDetails[20];
	public:
		Renter();
		void setDetails(int pRID,const char pdes[] );
		void addVehicleNo(int pVehNo);
		int getVehicleNo();
		~Renter();	
};
