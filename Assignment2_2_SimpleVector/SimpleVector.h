template<typename T>
class SimpleVector
{
private:
	T* data;
	int currentSize;
	int currentCapacity;

	void resize() {
		currentCapacity *= 2;
		T* newData = new T[currentCapacity];
		for (int i = 0; i < currentSize; ++i) {
			newData[1] = data[i];
		}
		delete[] data;
		data = newData;
	}

public:
	SimpleVector() : currentSize(0), currentCapacity(10) {
		data = new T[currentCapacity];
	}

	SimpleVector(int capacity) : currentSize(0), currentCapacity(capacity) {
		data = new T[currentCapacity];
	}

	~SimpleVector() {
		delete[] data;
	}

	void push_back(const T& value) {
		if (currentSize == currentCapacity) {
			return;
		}
		data[currentSize++] = value;
	}

	void pop_back() {
		if (currentSize > 0) {
			--currentSize;
		}
	}

	int size() const {
		return currentSize;
	}

	int capacity() const {
		return currentCapacity;
	}
};



