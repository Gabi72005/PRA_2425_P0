

struct BrazoRobotico {
	private:
		double x;
		double y;
		double z;
		bool objeto;
	public:
		BrazoRobotico(double _x, double _y, double _z, bool _objeto);
		double getX();
		double getY();
		double getZ();
		bool getObjeto();
		void coger();
		void soltar();
		void mover(double _x, double _y, double _z);
};

